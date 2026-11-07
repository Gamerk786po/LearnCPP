#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    int userInput;
    // Writing array with validation on userInput
    cout << "Enter 10 values (1 to 100): ";
    for (int i = 0; i < SIZE; i++)
    {
        do
        {
            cin >> userInput;
            if (0 <= userInput && userInput <= 100)
                break;
            cout << "Enter " << i << " index again: ";
        } while (true);
        arr[i] = userInput;
    }
    int countE = 0, countO = 0, sumE = 0;
    float avgE;
    int largestOdd;
    // Iterating the loop to find the counts, sumE and largestOdd
    for(int i = 0; i < SIZE; i++){
        if(arr[i] % 2 == 0){
            countE++;
            sumE += arr[i];
        }
        else{
            countO++;
            if(countO == 1) // If it is first odd integer in the array store it in largestOdd
                largestOdd = arr[i];
            else{ // Otherwise comaprison
                if(arr[i] > largestOdd)
                    largestOdd = arr[i];
            }

        }
    }
    avgE = (static_cast<float>(sumE))/countE;
    cout << "Even count: " << countE << endl;
    cout << "Odd count: " << countO << endl;
    cout << "Sum of even values: " << sumE << endl;
    cout << "Average of even values: " << fixed << setprecision(2) << avgE << endl;
    cout << "Largest odd value: " << largestOdd;
    return 0;
}