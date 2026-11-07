#include <iostream>
using namespace std;

int main()
{
    cout << "PRACTICAL MARKS RECORD SORTER" << endl;
    const int SIZE = 6;
    int students[SIZE] = {0};
    int marks[SIZE] = {0};
    int userInputM, userInputR;
    bool duplicate = false; // flag for duplcation
    for (int i = 0; i < SIZE; i++)
    {
        // Validation of input
        do
        {
            duplicate = false;
            cout << "Enter roll " << i + 1 << " and marks: ";
            cin >> userInputR >> userInputM;
            if (1000 <= userInputR && userInputR <= 9999 && 0 <= userInputM && userInputM <= 50)
            {
                for (int j = 0; j < i; j++)
                {
                    if (students[j] == userInputR)
                        duplicate = true;
                }
                if (!duplicate)
                    break;
            }
            cout << "Invalid Value!" << endl;
        } while (true);
        marks[i] = userInputM;
        students[i] = userInputR;
    }
    int smallestI;
    int temp;
    for (int i = 0; i < SIZE - 1; i++)
    {
        smallestI = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (marks[j] < marks[smallestI])
            {
                smallestI = j;
            }
        }
        if (smallestI != i)
        {
            temp = marks[i];
            marks[i] = marks[smallestI];
            marks[smallestI] = temp;
            temp = students[i];
            students[i] = students[smallestI];
            students[smallestI] = temp;
        }
        cout << "After pass " << i << ": " << endl;
        cout << "Roll numbers: ";
        for (int j = 0; j < SIZE; j++)
        {
            cout << students[j] << " ";
        }
        cout << endl;
        cout << "Marks: ";
        for (int j = 0; j < SIZE; j++)
        {
            cout << marks[j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << students[i] << " -> " << marks[i];
        cout << endl;
    }
    return 0;
}