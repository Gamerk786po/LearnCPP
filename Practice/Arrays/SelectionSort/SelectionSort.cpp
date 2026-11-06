#include <iostream>
using namespace std;
/*
Notes: The outer loop runs for SIZE - 1 phases. At each phase the smallestI becomes
the phase itself. The inner loop runs from i + 1 to j < SIZE if it finds any j where
arr[j] is smaller than arr[smallestI] then it updates smallestI = j. If smallestI is no
longer equal to the i (phase: The first index of remaining loop from phase to SIZE )
then it swap arr[i] with arr[smallestI], and that's how the smallestI would come to
first place. After that we will do the same for next iteration where i++ ( its the smallestI ).
*/
int main()
{
    const int SIZE = 6;
    int arr[SIZE] = {5, 2, 8, 1, 9, 3};
    cout << "Original Array: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int smallestI = 0;
    int temp;
    for (int i = 0; i < SIZE - 1; i++)
    {
        smallestI = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[j] < arr[smallestI])
            {
                smallestI = j;
            }
        }
        if (smallestI != i)
        {
            temp = arr[i];
            arr[i] = arr[smallestI];
            arr[smallestI] = temp;
        }
        cout << "Array when phase " << i << " : ";
        for (int i = 0; i < SIZE; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << "Sorted Array: ";
    for (int j = 0; j < SIZE; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}