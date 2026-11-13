#include <iostream>
using namespace std;
int main()
{
    do
    {
        int choice;
        int N;
        // validation for choice input
        cout << "(1: Hollow diamond pyramid)" << endl;
        cout << "(2: Palindrome traingle pattern)" << endl;
        cout << "(3: butterfly star pattern)" << endl;
        cout << "and negative for existing" << endl;
        cout << "Enter you choice: ";
        do
        {
            cin >> choice;
            if ((1 <= choice && choice <= 3) || choice < 0)
                break;
            cout << "Invalid Input. Enter again: ";
        } while (true);

        if (choice == 1)
        {
            cout << "Enter N: ";
            cin >> N;
            int val1 = N, val2 = N;
            // Hollow diamond pyramid
            /*
            Total rows = N, Total Colomns = 2 * N - 1
            Print first Asterisk at colomn N then in each row
            on colomn N-1 and N+1. Print spaces where it is
            neither value1 nor value2
            Upper half of the pyramid
            */
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= N * 2 - 1; j++)
                {
                    if (j == val1 || j == val2)
                        cout << "*";
                    else
                        cout << " ";
                }
                val1++;
                val2--;
                cout << endl;
            }
            /*
            Bottom half of the pyramid
            Total Rows = N - 1, Total Colomns = 2N - 1
            here extreme colomns are spaces and
            asterisk start t colomn: 2 till 10
            after each row val1 = val1 + 1 (val1 starting = 2)
            and val2 = val2  + 1 (val2 starting 9)
            */
            val1 = 2;
            val2 = 2 * N - 2;
            for (int i = 1; i <= N - 1; i++)
            {
                for (int j = 1; j <= N * 2 - 1; j++)
                {
                    if (j == val1 || j == val2)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
                val1++;
                val2--;
            }
        }
        else if (choice == 2)
        {
            cout << "Enter N: ";
            cin >> N;
            // Palindrome triangle pattern
            /*
            Total rows = N, Total Colomns = N * 2 - 1
            Print leading spaces for center alignment,
            then print ascending numbers from 1 to i,
            then print descending numbers from i-1 down to 1.
            */
            for (int i = 1; i <= N; i++)
            {
                // Print leading spaces for pyramid alignment
                for (int space = 1; space <= N - i; space++)
                {
                    cout << "  ";
                }
                // Print ascending numbers (1 to i)
                for (int j = 1; j <= i; j++)
                {
                    cout << j << " ";
                }
                // Print descending numbers (i-1 down to 1)
                for (int j = i - 1; j >= 1; j--)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Enter N: ";
            cin >> N;
            // Butterfly star pattern
            /*
            Total rows = N * 2, Total Colomns = N * 2
            Upper half of the butterfly
            */
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= 2 * N; j++)
                {
                    if (j <= i || j > 2 * N - i)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
            /*
            Bottom half of the butterfly
            */
            for (int i = N; i >= 1; i--)
            {
                for (int j = 1; j <= 2 * N; j++)
                {
                    if (j <= i || j > 2 * N - i)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
        else
            break;
    } while (true);
    return 0;
}