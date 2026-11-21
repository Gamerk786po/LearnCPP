#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int ROWS = 5;
    const int COLS = 5;
    int board[ROWS][COLS] = {0};
    int nMines;
    do
    {
        cout << "How many mines? (1-10): ";
        cin >> nMines;
        if (1 <= nMines && nMines <= 10)
            break;
    } while (true);
    int randomRow;
    int randomCol;
    bool validRandomCell = true;
    // Planting mines on the board at random cells
    for (int i = 0; i < nMines; i++)
    {
        validRandomCell = true;
        while (validRandomCell)
        {
            randomRow = rand() % 5;
            randomCol = rand() % 5;
            if (board[randomRow][randomCol] != -1)
            {
                board[randomRow][randomCol] = -1;
                validRandomCell = false;
            }
        }
    }
    // calculating neighbor mines
    int neighborMines = 0;
    const int SIZE_CELLS_TO_CHECK = 8;
    // Two parallel arrays to store the combinations to move 8 cells
    int cr[SIZE_CELLS_TO_CHECK] = {-1, 1, 0, 0, -1, 1, 1, -1}; 
    int cc[SIZE_CELLS_TO_CHECK] = {0, 0, -1, 1, -1, 1, -1, 1};
    int nr, nc;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (board[i][j] != -1)
            {
                neighborMines = 0;
                for (int k = 0; k < SIZE_CELLS_TO_CHECK; k++)
                {
                    // Moving to new cell according to the combination
                    nr = i + cr[k]; 
                    nc = j + cc[k];
                    if ((0 <= nr && nr <= ROWS - 1) && (0 <= nc && nc <= COLS - 1)) // bounds check
                    {
                        if (board[nr][nc] == -1)
                            neighborMines++;
                    }
                }
                board[i][j] = neighborMines;
            }
        }
    }
    // Printing the board with hints
    int safeCells = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (board[i][j] == -1)
                cout << " * ";
            else
            {
                cout << " " << board[i][j] << " ";
                safeCells++;
            }
        }
        cout << endl;
    }
    cout << "Safe cells: " << safeCells << endl;
    return 0;
}