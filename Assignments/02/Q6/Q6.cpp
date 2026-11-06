#include <iostream>
using namespace std;

int main()
{
    // Trash Variable for comma in Input
    char comma;
    // Variable for check
    bool check = true;
    // Variables for king
    int kingRow;
    char kingCol;
    char kingColor;

    // Variables for piece
    int pieceRow;
    char pieceCol;
    char pieceColor;
    char pieceType;

    // Variables for row difference and colomn difference
    int absRowDiff, absColDiff;

    // Input for king
    cout << "King: ";
    cin >> kingCol >> kingRow;
    // Input for piece
    cout << "Normal Piece: ";
    cin >> pieceCol >> pieceRow >> comma >>
        pieceColor >> comma >> pieceType;

    // Calculating absolute differences
    absRowDiff = (pieceRow > kingRow) ? pieceRow - kingRow : kingRow - pieceRow;
    absColDiff = (pieceCol > kingCol) ? pieceCol - kingCol : kingCol - pieceCol;

    // Assigning value to kingColor opposite of
    // pieceColor
    if (pieceColor == 'B')
    {
        kingColor = 'W';
    }
    else if (pieceColor == 'W')
    {
        kingColor = 'B';
    }

    // Validating the positions
    if (
        (pieceRow < 1 || pieceRow > 8) ||
        (kingRow < 1 || kingRow > 8) ||
        (pieceCol < 65 || pieceCol > 72) ||
        (kingCol < 65 || kingCol > 72))
    {
        cout << "The Positions are Invalid!";
    }
    else
    {
        cout << "The Positions are Valid!";
        cout << endl;

        // Checking the type of piece
        if (pieceType == 'R')
        {
            // Checking Rook Check
            if ((pieceRow == kingRow) || (pieceCol == kingCol))
            {
                (kingColor == 'B') ? cout << "The White Rook is giving a check to the Black King"
                                   : cout << "The Black Rook is giving check to the White King";
            }
            else
            {
                check = false;
            }
        }
        else if (pieceType == 'B')
        {
            // Checking Bishopp Check
            if (absRowDiff == absColDiff)
            {
                (kingColor == 'B') ? cout << "The White Bishopp is giving a check to the Black King"
                                   : cout << "The Black Bishop is giving check to the White King";
            }
            else
            {
                check = false;
            }
        }
        else if (pieceType == 'Q')
        {
            // Checking Queen Check
            if (
                ((pieceRow == kingRow) || (pieceCol = kingCol)) ||
                (absRowDiff == absColDiff))
            {
                (kingColor == 'B') ? cout << "The White Queen is giving a check to the Black King"
                                   : cout << "The Black Queen is giving check to the White King";
            }
            else
            {
                check = false;
            }
        }
        else if (pieceType == 'N')
        {
            // Checking knight check
            if ((absColDiff == 1 && absRowDiff == 2) || (absRowDiff == 2 && absColDiff == 1))
            {
                (kingColor == 'B') ? cout << "The White Knight is giving a check to the Black King"
                                   : cout << "The Black Knight is giving check to the White King";
            }
            else
            {
                check = false;
            }
        }
        else if (pieceType == 'P')
        {
            // Checking king color for check of Pawn
            if (kingColor == 'B')
            {
                if (
                    pieceRow + 1 == kingRow &&
                    (pieceCol + 1 == kingCol || pieceCol - 1 == kingCol))
                {
                    cout << "The White Pawn is giving check to the Black King";
                }
                else
                {
                    check = false;
                }
            }
            else if (kingColor == 'W')
            {
                if (
                    pieceRow - 1 == kingRow &&
                    (pieceCol + 1 == kingCol || pieceCol - 1 == kingCol))
                {
                    cout << "The Black Pawn is giving check to the White King";
                }
                else
                {
                    check = false;
                }
            }
        }
        else
        {
            cout << "The Piece Type is Invalid";
        }
    }

    // Displaying if Piece isn't checking
    if (!check)
    {
        (kingColor == 'B') ? cout << "The White Piece is not giving a check to the Black King"
                           : cout << "The Black Piece is not giving check to the White King";
    }

    return 0;
}