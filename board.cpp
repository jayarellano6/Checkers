#include "board.h"
using namespace std;

Board::Board()
{
    setPieces();
}
void Board::setPieces()
{
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
void Board::printBoard()
{
    int numbers[8] = {0,1,2,3,4,5,6,7};
    cout << "      This is your checker board\n";
    cout <<"   | A   B   C   D   E   F   G   H |\n";
    cout << char(196) <<"  ---------------------------------\n";
    for(int i = 0; i < 8; i++)
    {
        cout << numbers[i] << "  |";
        for(int j = 0; j < 8; j++)
        {
            cout << " " << b[i][j].getPieceDisplay() << " |";


        }
        if(i == 7)
            cout << endl << char(196) << "  ---------------------------------";
        else
            cout << endl << char(247) << "  ---------------------------------";
        cout << endl;
    }
}
