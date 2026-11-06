#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // Variables for map
    int map;
    bool mapValid = true;
    // Variable for shot row and colomn
    int row, col;
    // Variable for skipShots
    bool skipShots = false;
    // bool Variables
    bool subHit = false;
    bool dest1Hit = false;
    bool dest2Hit = false;
    // Counter Variables
    int shotsUsed = 0, shipsSunk = 0, score = 0;
    // Variables for ships' coordinates
    int subx, suby;
    int destx1, desty1;
    int destx2, desty2;
    // Variable for distance
    int distance;
    // Taking map input from user
    cout << "Enter map(1-3): ";
    cin >> map;
    // Switch Conditional Structure for map
    switch (map)
    {
    case 1:
        // Assigning Coordinates for sub
        subx = 1;
        suby = 1;
        // Assigning Coordinates for dest (1 cell)
        destx1 = 2;
        desty1 = 3;
        // Assigning Coordinates for dest (2 cell)
        destx2 = 3;
        desty2 = 3;
        break;
    case 2:
        // Assigning Coordinates for sub
        subx = 3;
        suby = 1;
        // Assigning Coordinates for dest (1 cell)
        destx1 = 1;
        desty1 = 2;
        // Assigning Coordinates for dest (2 cell)
        destx2 = 1;
        desty2 = 3;
        break;
    case 3:
        // Assigning Coordinates for sub
        subx = 2;
        suby = 2;
        // Assigning Coordinates for dest (1 cell)
        destx1 = 3;
        desty1 = 1;
        // Assigning Coordinates for dest (2 cell)
        destx2 = 3;
        desty2 = 2;
        break;
    default:
        mapValid = false;
        cout << "Invalid map!";
    }
    if (mapValid)
    {
        if (!skipShots)
        {
            // Shot-1
            // Taking input from user for shot row and col
            cout << "Shot 1 - Enter row and colomn: ";
            cin >> row >> col;
            // Conditional Structure for shot
            if (row < 1 || col < 1 || row > 3 || col > 3)
                cout << "Out of range, shot wasted!" << endl;
            else if (
                (dest1Hit && row == destx1 && col == desty1) ||
                (dest2Hit && row == destx2 && col == desty2) ||
                (subHit && row == subx && col == suby))
                cout << "Already hit, shot wasted!" << endl;
            else if (row == subx && col == suby)
            {
                cout << "HIT! Submarine sunk!" << endl;
                subHit = true;
                score += 10;
                score += 20;
                shipsSunk++;
            }
            else if ((row == destx1 && col == desty1) && !dest2Hit)
            {
                cout << "HIT!" << endl;
                dest1Hit = true;
                score += 10;
            }
            else if (row == destx2 && col == desty2 && !dest1Hit)
            {
                cout << "HIT!" << endl;
                dest2Hit = true;
                score += 10;
            }
            else if (
                (row == destx1 && col == desty1) && dest2Hit)
            {
                cout << "HIT! Destroyer sunk!" << endl;
                score += 30;
                score += 10;
                dest1Hit = true;
                shipsSunk++;
            }
            else if (
                (row == destx2 && col == desty2) && dest1Hit)
            {
                cout << "HIT! Destroyer sunk!" << endl;
                score += 30;
                score += 10;
                dest2Hit = true;
                shipsSunk++;
            }
            else
            {
                cout << "Miss! ";
                // Radar Hint if subHit is false
                if (!subHit)
                {
                    // Calculating absolute distance
                    distance = abs(row - subx) + abs(col - suby);
                    if (distance == 1)
                        cout << "Burning hot!" << endl;
                    else if (distance == 2)
                        cout << "Warm" << endl;
                    else if (distance >= 3)
                        cout << "Cold" << endl;
                }
            }
            // Checking if both ships are sunk
            if (shipsSunk == 2)
            {
                cout << "Victory!" << endl;
                skipShots = true;
            }
            shotsUsed++;
        }
        if (!skipShots)
        {
            // Shot-2
            // Taking input from user for shot row and col
            cout << "Shot 2 - Enter row and colomn: ";
            cin >> row >> col;
            // Conditional Structure for shot
            if (row < 1 || col < 1 || row > 3 || col > 3)
                cout << "Out of range, shot wasted!" << endl;
            else if (
                (dest1Hit && row == destx1 && col == desty1) ||
                (dest2Hit && row == destx2 && col == desty2) ||
                (subHit && row == subx && col == suby))
                cout << "Already hit, shot wasted!" << endl;
            else if (row == subx && col == suby)
            {
                cout << "HIT! Submarine sunk!" << endl;
                subHit = true;
                score += 10;
                score += 20;
                shipsSunk++;
            }
            else if ((row == destx1 && col == desty1) && !dest2Hit)
            {
                cout << "HIT!" << endl;
                dest1Hit = true;
                score += 10;
            }
            else if (row == destx2 && col == desty2 && !dest1Hit)
            {
                cout << "HIT!" << endl;
                dest2Hit = true;
                score += 10;
            }
            else if (
                (row == destx1 && col == desty1) && dest2Hit)
            {
                cout << "HIT! Destroyer sunk!" << endl;
                score += 30;
                score += 10;
                dest1Hit = true;
                shipsSunk++;
            }
            else if (
                (row == destx2 && col == desty2) && dest1Hit)
            {
                cout << "HIT! Destroyer sunk!" << endl;
                score += 30;
                score += 10;
                dest2Hit = true;
                shipsSunk++;
            }
            else
            {
                cout << "Miss! ";
                // Radar Hint if subHit is false
                if (!subHit)
                {
                    // Calculating absolute distance
                    distance = abs(row - subx) + abs(col - suby);
                    if (distance == 1)
                        cout << "Burning hot!" << endl;
                    else if (distance == 2)
                        cout << "Warm" << endl;
                    else if (distance >= 3)
                        cout << "Cold" << endl;
                }
            }
            // Checking if both ships are sunk
            if (shipsSunk == 2)
            {
                cout << "Victory!" << endl;
                skipShots = true;
            }
            shotsUsed++;
        }
        if (!skipShots)
        {
            // Shot-3
            // Taking input from user for shot row and col
            cout << "Shot 3 - Enter row and colomn: ";
            cin >> row >> col;
            // Conditional Structure for shot
            if (row < 1 || col < 1 || row > 3 || col > 3)
                cout << "Out of range, shot wasted!" << endl;
            else if (
                (dest1Hit && row == destx1 && col == desty1) ||
                (dest2Hit && row == destx2 && col == desty2) ||
                (subHit && row == subx && col == suby))
                cout << "Already hit, shot wasted!" << endl;
            else if (row == subx && col == suby)
            {
                cout << "HIT! Submarine sunk!" << endl;
                subHit = true;
                score += 10;
                score += 20;
                shipsSunk++;
            }
            else if ((row == destx1 && col == desty1) && !dest2Hit)
            {
                cout << "HIT!" << endl;
                dest1Hit = true;
                score += 10;
            }
            else if (row == destx2 && col == desty2 && !dest1Hit)
            {
                cout << "HIT!" << endl;
                dest2Hit = true;
                score += 10;
            }
            else if (
                (row == destx1 && col == desty1) && dest2Hit)
            {
                cout << "HIT! Destroyer sunk!" << endl;
                score += 30;
                score += 10;
                dest1Hit = true;
                shipsSunk++;
            }
            else if (
                (row == destx2 && col == desty2) && dest1Hit)
            {
                cout << "HIT! Destroyer sunk!" << endl;
                score += 30;
                score += 10;
                dest2Hit = true;
                shipsSunk++;
            }
            else
            {
                cout << "Miss! ";
                // Radar Hint if subHit is false
                if (!subHit)
                {
                    // Calculating absolute distance
                    distance = abs(row - subx) + abs(col - suby);
                    if (distance == 1)
                        cout << "Burning hot!" << endl;
                    else if (distance == 2)
                        cout << "Warm" << endl;
                    else if (distance >= 3)
                        cout << "Cold" << endl;
                }
            }
            // Checking if both ships are sunk
            if (shipsSunk == 2)
            {
                cout << "Victory!" << endl;
                skipShots = true;
            }
            shotsUsed++;
        }
        if (!skipShots)
        {
            // Shot-4
            // Taking input from user for shot row and col
            cout << "Shot 4 - Enter row and colomn: ";
            cin >> row >> col;
            // Conditional Structure for shot
            if (row < 1 || col < 1 || row > 3 || col > 3)
                cout << "Out of range, shot wasted!" << endl;
            else if (
                (dest1Hit && row == destx1 && col == desty1) ||
                (dest2Hit && row == destx2 && col == desty2) ||
                (subHit && row == subx && col == suby))
                cout << "Already hit, shot wasted!" << endl;
            else if (row == subx && col == suby)
            {
                cout << "HIT! Submarine sunk!" << endl;
                subHit = true;
                score += 10;
                score += 20;
                shipsSunk++;
            }
            else if ((row == destx1 && col == desty1) && !dest2Hit)
            {
                cout << "HIT!" << endl;
                dest1Hit = true;
                score += 10;
            }
            else if (row == destx2 && col == desty2 && !dest1Hit)
            {
                cout << "HIT!" << endl;
                dest2Hit = true;
                score += 10;
            }
            else if (
                (row == destx1 && col == desty1) && dest2Hit)
            {
                cout << "HIT! Destroyer sunk!" << endl;
                score += 30;
                score += 10;
                dest1Hit = true;
                shipsSunk++;
            }
            else if (
                (row == destx2 && col == desty2) && dest1Hit)
            {
                cout << "HIT! Destroyer sunk!" << endl;
                score += 30;
                score += 10;
                dest2Hit = true;
                shipsSunk++;
            }
            else
            {
                cout << "Miss! ";
                // Radar Hint if subHit is false
                if (!subHit)
                {
                    // Calculating absolute distance
                    distance = abs(row - subx) + abs(col - suby);
                    if (distance == 1)
                        cout << "Burning hot!" << endl;
                    else if (distance == 2)
                        cout << "Warm" << endl;
                    else if (distance >= 3)
                        cout << "Cold" << endl;
                }
            }
            // Checking if both ships are sunk
            if (shipsSunk == 2)
            {
                cout << "Victory!" << endl;
                skipShots = true;
            }
            shotsUsed++;
        }
        // Displaying final Output
        cout << "Shots used: " << shotsUsed << endl;
        cout << "Ships sunk: " << shipsSunk << endl;
        cout << "Score: " << score << endl;
        cout << "Rank: ";
        // Displaying rank
        if (shipsSunk == 2 && shotsUsed <= 3)
            cout << "Admiral";
        else if (shipsSunk == 2 && shotsUsed == 4)
            cout << "Captain";
        else if (shipsSunk == 1)
            cout << "Sailor";
        else if (shipsSunk == 0)
            cout << "Cadet";
    }
    return 0;
}