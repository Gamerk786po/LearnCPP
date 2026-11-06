#include <iostream>
using namespace std;
/*
Notes:
The outer loop runs for SIZE - 1 phases. After each phase I fix the last
index in the sorted array, and in each phase the code j = 0 runs from
start to SIZE - 1 - i
The outer loop breaks when swapped becomes false that means that no
swapped happened in the following
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
    int temp;
    bool swapped = true;
    for (int i = 0; i < SIZE - 1 && swapped; i++)
    {
        swapped = false;
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
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
    return 0;
}