
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "===== CINEMA SEAT BOOKING =====" << endl;
    int choice;
    const int SEATS_ROWS = 5;
    const int SEATS_COLS = 6;
    int seats[SEATS_ROWS][SEATS_COLS] = {0};
    const int NO_OF_NAMES = 30;
    const int SIZE_OF_NAME = 20;
    char names[NO_OF_NAMES][SIZE_OF_NAME];
    const int NO_OF_SEATS = 30;
    int slots[NO_OF_SEATS] = {0};
    do
    {
        cout << "1. Display seats" << endl;
        cout << "2. Book a seat" << endl;
        cout << "3. Cancel a booking" << endl;
        cout << "4. Show statistics" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        int row;
        int seat;
        int freeSeats = 0;
        int bookedSeats = 0;
        float oPercentage;
        int morning = 0;
        int evening = 0;
        int night = 0;
        switch (choice)
        {
        case 1:
            cout << "       1 2 3 4 5 6 " << endl;
            for (int i = 0; i < SEATS_ROWS; i++)
            {
                cout << "Row " << i + 1 << ": ";
                for (int j = 0; j < SEATS_COLS; j++)
                {
                    cout << ((seats[i][j] == 0) ? " O " : " X ");
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Enter row (1-5) and seat (1-6): ";
            cin >> row >> seat;
            if (!((1 <= row && row <= SEATS_ROWS) && (1 <= seat && seat <= SEATS_COLS)))
                cout << "Seat is Invalid." << endl;
            else if (seats[row - 1][seat - 1] == 1)
                cout << "Already booked." << endl;
            else
            {
                cout << "Enter name: ";
                cin.ignore();
                cin.getline(names[(row - 1) * 6 + (seat - 1)], 19);
                int userInput;
                do
                {
                    cout << "Enter slot: (1=Morning, 2=Evening, 3=Night): ";
                    cin >> userInput;
                    if (1 <= userInput && userInput <= 3)
                        break;
                    cout << "Invalid Slot. " << endl;
                } while (true);
                slots[(row - 1) * 6 + (seat - 1)] = userInput;
                seats[row - 1][seat - 1] = 1;
                cout << "Seat (" << row << ", " << seat << ") booked successfully." << endl;
            }
            break;
        case 3:
            cout << "Enter row (1-5) and seat (1-6): ";
            cin >> row >> seat;
            if (!((1 <= row && row <= SEATS_ROWS) && (1 <= seat && seat <= SEATS_COLS)))
                cout << "Seat is Invalid." << endl;
            else if (seats[row - 1][seat - 1] != 1)
                cout << "Seat is not booked yet." << endl;
            else
            {
                cout << "Booking of " << names[(row - 1) * 6 + (seat - 1)] << " is cancelled." << endl;
                seats[row - 1][seat - 1] = 0;
                slots[(row - 1) * 6 + (seat - 1)] = 0;
                names[(row - 1) * 6 + (seat - 1)][0] = '\0';
            }
            break;
        case 4:
            for (int i = 0; i < SEATS_ROWS; i++)
            {
                for (int j = 0; j < SEATS_COLS; j++)
                {
                    (seats[i][j] == 0) ? freeSeats++ : bookedSeats++;
                }
            }
            oPercentage = bookedSeats / 30.00 * 100;
            for (int i = 0; i < NO_OF_SEATS; i++)
            {
                if (slots[i] == 1)
                    morning++;
                else if (slots[i] == 2)
                    evening++;
                else if (slots[i] == 3)
                    night++;
            }
            cout << "Booked seats: " << bookedSeats << endl;
            cout << "Free seats: " << freeSeats << endl;
            cout << "Occupancy: " << fixed << setprecision(2) << oPercentage << "%" << endl;
            cout << "Morning: " << morning << endl;
            cout << "Evening: " << evening << endl;
            cout << "Night: " << night << endl;
            break;
        case 0:
            cout << "Thank you. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. " << endl;
        }
    } while (choice != 0);
    return 0;
}