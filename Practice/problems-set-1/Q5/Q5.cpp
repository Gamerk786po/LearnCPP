#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int arr[SIZE];
    int userInput;
    cout << "Enter 8 values (1 to 99): ";
    // Input array with validation
    for (int i = 0; i < SIZE; i++)
    {
        do
        {
            cin >> userInput;
            if (1 <= userInput && userInput <= 99)
                break;
            cout << "Enter " << i << " index again: ";
        } while (true);
        arr[i] = userInput;
    }
    int largestI = 0;
    // Loop for searching the largestIndex in arr
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[largestI] < arr[i])
        {
            largestI = i;
        }
    }
    int secondLargestI = 0;
    // Loop for searching the second largest index.
    for (int i = 0; i < SIZE; i++)
    {
        // Value at i must be less than arr[largestI] and greater than arr[secondLargestI]
        if (arr[i] < arr[largestI] && arr[i] > arr[secondLargestI])
        {
            secondLargestI = i;
        }
    }
    cout << "Largest: " << arr[largestI] << endl;
    cout << "Second largest distinct: " << arr[secondLargestI] << " (first at index " << secondLargestI << ")" << endl;
    return 0;
}