#include "game.h"

Game::Game()
{

}
void Game::playGame()
{
    Board brd;
    char letterSide, moves;
    char choice = 'y';
    int numberSide;
    int x, y, x1, y1;
    cout << "\t   Welcome to Checkers!\n\n";
    brd.printBoard();
    do{

    if(brd.red.getIsTurn() == true)
        cout << "(Red piece player)";
    if(brd.blk.getIsTurn() == true)
        cout << "(Black piece player)";
    cout << "\nPick a Piece to move\n"
         << "Letter side: ";
    cin >> letterSide;
    if(tolower(letterSide) == 'a')
        y = 0;
    else if(tolower(letterSide) == 'b')
        y = 1;
    else if(tolower(letterSide) == 'c')
        y = 2;
    else if(tolower(letterSide) == 'd')
        y = 3;
    else if(tolower(letterSide) == 'e')
        y = 4;
    else if(tolower(letterSide) == 'f')
        y = 5;
    else if(tolower(letterSide) == 'g')
        y = 6;
    else if(tolower(letterSide) == 'h')
        y = 7;
    else
    {
        cout << "!INVALID!\nPick a Piece to move\n"
         << "Letter side: ";
        cin >> letterSide;
        if(tolower(letterSide) == 'a')
        y = 0;
        else if(tolower(letterSide) == 'b')
        y = 1;
        else if(tolower(letterSide) == 'c')
        y = 2;
        else if(tolower(letterSide) == 'd')
        y = 3;
        else if(tolower(letterSide) == 'e')
        y = 4;
        else if(tolower(letterSide) == 'f')
        y = 5;
        else if(tolower(letterSide) == 'g')
        y = 6;
        else if(tolower(letterSide) == 'h')
        y = 7;
    }

    cout << "Number side: ";
    cin >> numberSide;
    x = numberSide;
    if(numberSide > 7)
    {
        cout << "!INVALID!\nNumber side: ";
        cin >> numberSide;
        x = numberSide;
    }


    if(brd.b[x][y].getIsPiece())
    {
        if((brd.b[x][y].getIsRed()) && brd.red.getIsTurn() == true && brd.blk.getIsTurn() == false)
        {
            cout << "r-Where would you like to move?\n";
            cout << "Enter letter of space to move to: ";
            cin >> letterSide;
            if(tolower(letterSide) == 'a')
                y1 = 0;
            else if(tolower(letterSide) == 'b')
                y1 = 1;
            else if(tolower(letterSide) == 'c')
                y1 = 2;
            else if(tolower(letterSide) == 'd')
                y1 = 3;
            else if(tolower(letterSide) == 'e')
                y1 = 4;
            else if(tolower(letterSide) == 'f')
                y1 = 5;
            else if(tolower(letterSide) == 'g')
                y1 = 6;
            else if(tolower(letterSide) == 'h')
                y1 = 7;
            cout << "Enter number of space to move to: ";
            cin >> numberSide;
            x1 = numberSide;
            if(brd.checkMove(x,y,x1,y1) == true)
            {
                brd.movePiece(x, y, x1, y1);
                brd.red.setIsTurn(false);
                brd.blk.setIsTurn(true);
                if(brd.b[x1][y1].getIsRed() == true && x1 == 0)
                {
                    brd.b[x1][y1].setIsKing(true);
                }
                brd.printBoard();
                if(brd.red.getScore() == 2)
                {
                    cout << "\nRED PIECE PLAYER IS THE WINNER\n";
                    choice = ' ';
                }
            }

            else
            {
                cout << "\n\t!INVALID MOVE!\n\n";
                brd.printBoard();

            }
        }
        else if((!brd.b[x][y].getIsRed()) && brd.blk.getIsTurn() == true && brd.red.getIsTurn() == false)
        {
            cout << "b-Where would like to move?\n";
            cout << "Enter letter of space to move to: ";
            cin >> letterSide;
            if(tolower(letterSide) == 'a')
                y1 = 0;
            else if(tolower(letterSide) == 'b')
                y1 = 1;
            else if(tolower(letterSide) == 'c')
                y1 = 2;
            else if(tolower(letterSide) == 'd')
                y1 = 3;
            else if(tolower(letterSide) == 'e')
                y1 = 4;
            else if(tolower(letterSide) == 'f')
                y1 = 5;
            else if(tolower(letterSide) == 'g')
                y1 = 6;
            else if(tolower(letterSide) == 'h')
                y1 = 7;
            cout << "Enter number of space to move to: ";
            cin >> numberSide;
            x1 = numberSide;
            if(brd.checkMove(x,y,x1,y1) == true)
            {
                brd.movePiece(x, y, x1, y1);
                brd.red.setIsTurn(true);
                brd.blk.setIsTurn(false);
                if(brd.b[x1][y1].getIsRed() == false && x1 == 7)
                {
                    brd.b[x1][y1].setIsKing(true);
                }
                brd.printBoard();
                if(brd.blk.getScore() == 2)
                {
                    cout << "\n\nBLACK PIECE PLAYER IS THE WINNER\n\n";
                }

            }

            else
            {
                cout << "\n\t!INVALID MOVE!\n\n";
                brd.printBoard();

            }

        }

    }
    else
    {
        cout << "\n!Invalid Piece Selection!\n";
    }


    }while(choice != ' ');

}

