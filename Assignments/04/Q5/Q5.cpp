#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 3;
    char board[ROWS][COLS];
    char userInput;
    cout << "Enter the board(X or O), row by row: " << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            do
            {
                cin >> userInput;
                if (userInput == 'O' || userInput == 'X')
                    break;
            } while (true);
            board[i][j] = userInput;
        }
    }
    cout << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << board[i][j];
            cout << ((j != 2) ? " | " : "");
        }
        cout << endl;
        cout << ((i != 2) ? "--+---+--" : "");
        cout << endl;
    }
    bool Xwin = false, Owin = false;
    int winningRow = 0;
    int winningCol = 0;
    int winningDia = 0;
    for (int i = 0; i < ROWS; i++)
    {
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X')
        {
            Xwin = true;
            if (winningRow == 0)
                winningRow = i + 1;
        }
        else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O')
        {
            Owin = true;
            if (winningRow == 0)
                winningRow = i + 1;
        }
    }
    for (int j = 0; j < COLS; j++)
    {
        if (board[0][j] == 'X' && board[1][j] == 'X' && board[2][j] == 'X')
        {
            Xwin = true;
            if (winningCol == 0)
                winningCol = j + 1;
        }
        else if (board[0][j] == 'O' && board[1][j] == 'O' && board[2][j] == 'O')
        {
            Owin = true;
            if (winningCol == 0)
                winningCol = j + 1;
        }
    }
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        Xwin = true;
        if (winningDia == 0)
            winningDia = 1;
    }
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
    {
        Owin = true;
        if (winningDia == 0)
            winningDia = 1;
    }
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
    {
        Xwin = true;
        if (winningDia == 0)
            winningDia = 2;
    }
    else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
    {
        Owin = true;
        if (winningDia == 0)
            winningDia = 2;
    }
    if (Xwin && Owin)
        cout << "Invalid board" << endl;
    else if (Xwin)
    {
        if (winningRow != 0)
            cout << "Result: X wins (row " << winningRow << ")" << endl;
        else if (winningCol != 0)
            cout << "Result: X wins (column " << winningCol << ")" << endl;
        else if (winningDia == 1)
            cout << "Result: X wins (main diagonal)" << endl;
        else if (winningDia == 2)
            cout << "Result: X wins (secondary diagonal)" << endl;
    }
    else if (Owin)
    {
        if (winningRow != 0)
            cout << "Result: O wins (row " << winningRow << ")" << endl;
        else if (winningCol != 0)
            cout << "Result: O wins (column " << winningCol << ")" << endl;
        else if (winningDia == 1)
            cout << "Result: O wins (main diagonal)" << endl;
        else if (winningDia == 2)
            cout << "Result: O wins (secondary diagonal)" << endl;
    }
    else
        cout << "Result: Draw" << endl;
    return 0;
}