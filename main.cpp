#include "board.h"
#include "piece.h"
#include "game.h"

using namespace std;

int main()
{
    char choice = ' ';
    do{
        Game g;
        g.playGame();
        cout << "Would you like to start a new game (y - yes / n - no): ";
        cin >> choice;
    }while(choice != 'n');
}
