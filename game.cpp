#include "game.h"

Game::Game()
{

}
void Game::playGame()
{
    Board brd;
    char letterSide, moves;
    int numberSide;
    int x, y, x1, y1;
    do{
    brd.printBoard();

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
        cout << "INVALID CHOICE\n";
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
    }
    cout << "Number side: ";
    cin >> numberSide;
    x = numberSide;


    if(brd.b[x][y].getIsPiece())
    {
        cout << "Where would you like to move?\n";
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
        brd.movePiece(x, y, x1, y1);
    }
    else
    {
        cout << "\n!Invalid Piece Selection!\n";
    }


    }while(letterSide != ' ');

}
