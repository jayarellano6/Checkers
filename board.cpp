#include "board.h"

#include <iostream>
=======

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
=======
    blk.setIsBlack(true);
    blk.setIsTurn(false);
    red.setIsBlack(false);
    red.setIsTurn(true);
    b[0][1].setAllValues(0, 1, true, false, false);
    b[0][3].setAllValues(0, 3, true, false, false);
    b[0][5].setAllValues(0, 5, true, false, false);
    b[0][7].setAllValues(0, 7, true, false, false);

    b[1][0].setAllValues(1, 0, true, false, false);
    b[1][2].setAllValues(1, 2, true, false, false);
    b[1][4].setAllValues(1, 4, true, false, false);
    b[1][6].setAllValues(1, 6, true, false, false);

    b[2][1].setAllValues(2, 1, true, false, false);
    b[2][3].setAllValues(2, 3, true, false, false);
    b[2][5].setAllValues(2, 5, true, false, false);
    b[2][7].setAllValues(2, 7, true, false, false);

    b[5][0].setAllValues(5, 0, true, true, false);
    b[5][2].setAllValues(5, 2, true, true, false);
    b[5][4].setAllValues(5, 4, true, true, false);
    b[5][6].setAllValues(5, 6, true, true, false);

    b[6][1].setAllValues(6, 1, true, true, false);
    b[6][3].setAllValues(6, 3, true, true, false);
    b[6][5].setAllValues(6, 5, true, true, false);
    b[6][7].setAllValues(6, 7, true, true, false);

    b[7][0].setAllValues(7, 0, true, true, false);
    b[7][2].setAllValues(7, 2, true, true, false);
    b[7][4].setAllValues(7, 4, true, true, false);
    b[7][6].setAllValues(7, 6, true, true, false);
}
void Board::swapValues(Piece& p1, Piece& p2)
{
    Piece x;
    x = p1;
    p1 = p2;
    p2 = x;
}

void Board::printBoard()
{
    int numbers[8] = {0,1,2,3,4,5,6,7};
    cout << "------------------------------------------\n";
    cout << "|Scores" <<  endl;
    cout << "|B player: [" << blk.getScore() << "] Pieces: ";
    for(int i = 0; i < blk.getScore(); i++)
    {
        cout << " (r) ";
    }
    cout << "\n|R player: [" << red.getScore() << "] Pieces: ";
    for(int i = 0; i < red.getScore(); i++)
    {
        cout << " (b) ";
    }
    cout << "\n------------------------------------------\n";
    cout <<"\n     | A   B   C   D   E   F   G   H |\n\n";
    cout << char(196) <<"    ---------------------------------\n";
    for(int i = 0; i < 8; i++)
    {
        cout << numbers[i] << "    |";
        for(int j = 0; j < 8; j++)
        {
            if(b[i][j].getPieceDisplay() != char(176))
                cout << "(" << b[i][j].getPieceDisplay() << ")|";
            else
                cout << " " << b[i][j].getPieceDisplay() << " |";


        }
        if(i == 7)
            cout << endl << char(196) << "    ---------------------------------";
        else
            cout << endl << "     |-------------------------------|";
        cout << endl;
    }
}

bool Board::checkMove(int x, int y, int x1, int y1)
{
    if(b[x1][y1].getIsPiece() == true)
        return false;
    //black piece
    if(b[x][y].getIsRed() == false && b[x][y].getIsKing() == false){
    if((x+1 == x1 && y + 1 == y1) || (x+1 == x1 && y - 1 == y1))
    {
        if(b[x1][y1].getIsPiece() == false)
            return true;
    }
    else if ((x+2 == x1 && y + 2 == y1) || (x+2 == x1 && y - 2 == y1))
    {
        if((b[x + 1][y + 1].getIsPiece() || b[x + 1][y - 1].getIsPiece()) && (b[x + 1][y + 1].getIsRed() || b[x + 1][y - 1].getIsRed()))
        {
            //takes piece
            if(b[x + 1][y + 1].getIsPiece())
            {
                Piece temp;
                swapValues(temp, b[x + 1][y + 1]);
                forceMove(x1, y1);
            }
            if(b[x + 1][y - 1].getIsPiece())
            {
                Piece temp;
                swapValues(temp, b[x + 1][y - 1]);
                forceMove(x1, y1);
            }

            blk.incrementScore();
            return true;


        }

            // We could call an eaten function here?
    }
    }
    //black king
    if(b[x][y].getIsRed() == false && b[x][y].getIsKing() == true)
    {
        if((x-1 == x1 && y + 1 == y1) || (x-1 == x1 && y - 1 == y1))
        {
            if(b[x1][y1].getIsPiece() == false)
                return true;
        }
        else if ((x-2 == x1 && y + 2 == y1) || (x-2 == x1 && y - 2 == y1))
        {
            if((b[x - 1][y + 1].getIsPiece() || b[x - 1][y - 1].getIsPiece()) && (b[x - 1][y + 1].getIsRed() || b[x - 1][y - 1].getIsRed()))
            {
                //take piece
                if(b[x - 1][y + 1].getIsPiece())
                {
                    Piece temp;
                    swapValues(temp, b[x - 1][y + 1]);
                    forceMove(x1, y1);
                }
                if(b[x - 1][y - 1].getIsPiece())
                {
                    Piece temp;
                    swapValues(temp, b[x - 1][y - 1]);
                    forceMove(x1, y1);
                }
            blk.incrementScore();
            return true;


            }
        }
    }
    //red king
    if(b[x][y].getIsRed() == true && b[x][y].getIsKing() == true)
    {
        if((x+1 == x1 && y + 1 == y1) || (x+1 == x1 && y - 1 == y1))
        {
            if(b[x1][y1].getIsPiece() == false)
                return true;
        }
        else if ((x+2 == x1 && y + 2 == y1) || (x+2 == x1 && y - 2 == y1))
        {
            if((b[x + 1][y + 1].getIsPiece() || b[x + 1][y - 1].getIsPiece()) && (!b[x + 1][y + 1].getIsRed() || !b[x + 1][y - 1].getIsRed()))
            {
            //takes piece
                if(b[x + 1][y + 1].getIsPiece())
                {
                    Piece temp;
                    swapValues(temp, b[x + 1][y + 1]);
                    forceMove(x1, y1);
                }
                if(b[x + 1][y - 1].getIsPiece())
                {
                    Piece temp;
                    swapValues(temp, b[x + 1][y - 1]);
                    forceMove(x1, y1);
                }
            red.incrementScore();
            return true;


            }

        }
    }
    //red piece
    if(b[x][y].getIsRed() == true && b[x][y].getIsKing() == false){
    if((x-1 == x1 && y + 1 == y1) || (x-1 == x1 && y - 1 == y1))
    {
        if(b[x1][y1].getIsPiece() == false)
            return true;
    }
    else if ((x-2 == x1 && y + 2 == y1) || (x-2 == x1 && y - 2 == y1))
    {
        if((b[x - 1][y + 1].getIsPiece() || b[x - 1][y - 1].getIsPiece()) && (!b[x - 1][y + 1].getIsRed() || !b[x - 1][y - 1].getIsRed()))
        {
            //take piece
            if(b[x - 1][y + 1].getIsPiece())
            {
                Piece temp;
                swapValues(temp, b[x - 1][y + 1]);
                forceMove(x1, y1);
            }
            if(b[x - 1][y - 1].getIsPiece())
            {
                Piece temp;
                swapValues(temp, b[x - 1][y - 1]);
                forceMove(x1, y1);
            }
            red.incrementScore();
            return true;

        }

    }

    }
    if(b[x][y].getIsRed() == true && b[x][y].getIsKing() == false)
    {
        if((x1 > x || x1 == x || x1 <= (x-2)) || (y1 == y || (y1 >= (y+2)) || (y1 <= (y-2))))
            return false;
    }
    if(b[x][y].getIsRed() == true && b[x][y].getIsKing() == true)
    {
        if((x1 == x || x1 <= (x-2)) || (y1 == y || (y1 >= (y+2)) || (y1 <= (y-2))))
            return false;
    }
    if(b[x][y].getIsRed() == false && b[x][y].getIsKing() == false)
    {
        if((x1 < x || x1 == x) || (y1 == y))
            return false;
    }
    if(b[x][y].getIsRed() == false && b[x][y].getIsKing() == true)
    {
        if((x1 == x) || (y1 == y))
            return false;
    }


}

void Board::movePiece(int x, int y, int x1, int y1)
{
    swapValues(b[x][y],b[x1][y1]);

}
void Board::forceMove(int x, int y)
{
		if(b[x][y].getIsKing() && b[x][y].getIsRed() && ((b[x + 1][y + 1]. getIsRed() == false && b[x+1][y+1].getIsPiece())||( b[x + 1][y- 1].getIsRed() == false && b[x+1][y-1].getIsPiece())||( b[x - 1][y + 1].getIsRed() == false && b[x-1][y+1].getIsPiece())|| (b[x- 1][y - 1].getIsRed() == false && b[x-1][y-1].getIsPiece())))
		{

			if((b[x-2][y + 2].getIsPiece() == false ))
			{
				Piece tempo;
				swapValues(b[x][y], b[x-2][y + 2]);
				swapValues(tempo,b[x - 1][y + 1] );
				red.incrementScore();
				forceMove(x-2 , y+2);
			}
			else if (b[x-2][y-2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x-2][y -2]);
				swapValues(tempo,b[x - 1][y - 1] );
				red.incrementScore();
				forceMove(x-2 , y-2);
			}
			else if (b[x+2][y-2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x+2][y -2]);
				swapValues(tempo,b[x + 1][y - 1] );
				red.incrementScore();
				forceMove(x+2 , y-2);
			}
			else if (b[x-2][y-2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x+2][y +2]);
				swapValues(tempo,b[x + 1][y + 1] );
				red.incrementScore();
				forceMove(x-2 , y-2);
			}
		}

		else if(b[x][y].getIsKing() && b[x][y].getIsRed() == false && ( (b[x + 1][y + 1].getIsRed() && b[x + 1][y + 1].getIsPiece()) ||  (b[x + 1][y - 1].getIsRed() && b[x + 1][y + 1].getIsPiece()) || (b[x - 1][y + 1].getIsRed() && b[x + 1][y + 1].getIsPiece()) || (b[x + 1][y + 1].getIsRed() && b[x - 1][y - 1].getIsPiece())))
		{
			if((b[x-2][y + 2].getIsPiece() == false ))
			{
				Piece tempo;
				swapValues(b[x][y], b[x-2][y + 2]);
				swapValues(tempo,b[x - 1][y + 1] );
				blk.incrementScore();
				forceMove(x-2 , y+2);
			}
			else if (b[x-2][y-2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x-2][y -2]);
				swapValues(tempo,b[x - 1][y - 1] );
				blk.incrementScore();
				forceMove(x-2 , y-2);
			}
			else if (b[x+2][y-2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x+2][y -2]);
				swapValues(tempo,b[x + 1][y - 1] );
				blk.incrementScore();
				forceMove(x+2 , y-2);
			}
			else if (b[x-2][y-2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x+2][y +2]);
				swapValues(tempo,b[x + 1][y + 1] );
				blk.incrementScore();
				forceMove(x-2 , y-2);
			}
		}

		else if(b[x][y].getIsKing() == false && b[x][y].getIsRed() == false && ( (b[x + 1][y + 1].getIsRed() && b[x + 1][y + 1].getIsPiece()) || (b[x + 1][y - 1].getIsRed() && b[x + 1][y - 1].getIsPiece())))
		{
			if (b[x+2][y-2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x+2][y -2]);
				swapValues(tempo,b[x + 1][y - 1] );
				blk.incrementScore();
				forceMove(x+2 , y-2);
			}
			else if (b[x+2][y+2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x+2][y +2]);
				swapValues(tempo,b[x + 1][y + 1] );
				blk.incrementScore();
				forceMove(x+2 , y+2);
			}
		}
// Check piece
		else if(b[x][y].getIsKing() == false && b[x][y].getIsRed() && ( (!b[x - 1][y + 1].getIsRed() && b[x - 1][y + 1].getIsPiece()) || (!b[x - 1][y - 1].getIsRed() && b[x - 1][y - 1].getIsPiece()) ))
		{
			if (b[x-2][y+2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x-2][y +2]);
				swapValues(tempo,b[x - 1][y + 1] );
				red.incrementScore();
				forceMove(x-2 , y+2);
			}
			else if (b[x-2][y-2].getIsPiece() == false)
			{
				Piece tempo;
				swapValues(b[x][y], b[x-2][y -2]);
				swapValues(tempo,b[x - 1][y - 1] );
				red.incrementScore();
				forceMove(x-2 , y-2);
			}
		}
}


