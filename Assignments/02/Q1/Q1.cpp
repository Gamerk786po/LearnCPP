#include <iostream>
using namespace std;
int main()
{
    // Taking day input from user
    char day;
    cout << "day = ";
    cin >> day;
    // Conditional Structure
    switch (day)
    {
    case '1':
        cout << "Chest and Triceps";
        break;
    case '2':
        cout << "Back and Biceps";
        break;
    case '3':
        cout << "Rest Day";
        break;
    case '4':
        cout << "Legs";
        break;
    case '5':
        cout << "Shoulders and Abs";
        break;
    case '6':
        cout << "Cardio";
        break;
    case '7':
        cout << "Rest Day";
        break;
    default:
        cout << "Invalid day number";
    }
    return 0;
}