#include "board.h"
#include <iostream>
using namespace std;

Board::Board()
{
    player1 = 'b';
    player2 = 'r';
}
void Board::printBoard()
{
    char shade = 177,
         side = 97;

    int row,
        column;
    cout << "\n\n    1  2  3  4  5  6  7  8"<<endl;
    cout << "  __________________________"<<endl;
    for(row = 1; row <= 8; row++)
    {
        cout << side << " |";
        side++;
        for(column = 1; column <= 8; column++)

            if((row + column)%2 != 0)
                cout << shade << board[row][column] << shade;
            else
                cout << " " << board[row][column] << " ";
                cout << "|" << endl;
    }
    cout << "  --------------------------" << endl;
}
void Board::setPiece()
{
    char p1 = 'b',
         p2 = 'r',
         shade = 177;
    int row = 0,
        column = 0;

    for (row = 1; row <= 8; row++)
        for (column = 1; column <= 8; column++)
        {
            if ((row + column)%2 != 0 && row <= 3)
                board[row][column] = p1;
            else if ((((row + column)%2) != 0) && (row > 2) && (row <= 5))
                board[row][column] = shade;
            else if ((((row + column)%2) != 0) && (row > 5) && (row <= 8))
                board[row][column] = p2;
            else
                board[row][column] = 0;
        }
}
bool Board::checkMove()
{
    // If that spot is not holding a king
    if (board[row][column] != 'B' && board[row][column] != 'R')
    {   // as long as whichever player is going, is trying to move in the wrong direction
        if ((player1 == 'b' && futureRow < row) || (player2 == 'r' && futureRow > row))
        {   // don't allow the move.
            movePiece() = false;
            return false;
        }
    }
     // If the location entered, to move from, doesn't have a piece
    if (board[row][column] == ' ')
    {   // don't allow the move.
        movePiece = false;
        return false;
    }
    // If the piece is trying to move to a spot that's already taken
    if (board[futureRow][futureColumn] != ' ')
    {   // don't allow the move.
        movePiece = false;
        return false;
    }
    // If the piece tries to move straight or sideways
    if (column == futureColumn || row == futureRow)
    {   // don't allow the move.
        movePiece = false;
        return false;
    }

/*    // checks if the piece is moving by more than 1 column and only 1 row
    if ((futureColumn > column + 1 || futureColumn < column - 1) && (futureRow == row +1 || futureRow == row1 - 1))
    {
        movePiece = false;
        return false;
    }

    // checks if the piece is leaping.
    if (futureRow > row + 1 || futureRow < row - 1)
    {
        // checks if the piece is leaping too far.
        if (futureRow > row + 2 || futureRow < row - 2)
        {
            movePiece = false;
            return false;
        }

        // checks if the piece isn't moving by exactly 2 columns
        if (futureColumn != column + 2 && futureColumn != column - 2)
        {
            movePiece = false;
            return false;
        }

        // checks if the piece is leaping over another piece.
        if (futureRow > row && futureColumn > column)
        {
            if (board[futureRow - 1][futureColumn - 1] == ' ')
            {
                movePiece = false;
                return false;
            }
        }
        else if (futureRow > row && futureColumn < column)
        {
            if (board[futureRow - 1][futureColumn + 1] == ' ')
            {
                movePiece = false;
                return false;
            }
        }
        else if (futureRow < row && futureColumn> column)
        {
            if (board[futureRow + 1][futureColumn - 1] == ' ')
            {
                movePiece = false;
                return false;
            }
        }
        else if (futureRow < row && futureColumn < column)
        {
            if (board[futureRow + 1][futureColumn + 1] == ' ')
            {
                movePiece = false;
                return false;
            }
        }*/

        movePiece = true;
        return true;
    }

    movePiece = false;
    return true;
}
void Board::movePiece(Piece board[row][column])
{
    board[row][column] = board[futureRow][futureColumn];
}
