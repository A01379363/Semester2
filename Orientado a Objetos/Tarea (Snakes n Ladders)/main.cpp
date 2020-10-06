#include <iostream>
#include <unistd.h>
#include "SnakesAndLadders.h"
#include "Player.h"

int main()
{
    vector<string> board;
    Player *enrique = new Player(1);
    Player *matt = new Player(2);
    SnakesAndLadders game1(&board, enrique, matt);

    char end = 'C';

    while (end == 'C')
    {
        cout << "Press C to continue next turn, or E to end the game: ";
        char letra;
        cin >> letra;
        if (letra == 'E')
        {
            cout << "Thanks for playing!" << endl;
            break;
        }
        if (letra == 'C')
        {

            cout << "Player 1 is on tile " << enrique->getPosition() << " " << board[enrique->getPosition()] << endl;
            cout << "Player 2 is on tile " << matt->getPosition() << " " << board[matt->getPosition()] << endl;
            cout << "----------------------------------------------------------" << endl;
            game1.rollDice(enrique);
            if (enrique->getPosition() >= 30)
            {
                cout << "Player 1 Wins" << endl;
                break;
            }
            sleep(1);
            game1.rollDice(matt);
            if (matt->getPosition() >= 30)
            {
                cout << "Player 2 Wins" << endl;
                break;
            }
        }
        else
        {
            cout << "Invalid option" << endl;
        }
    }

    delete enrique;
    delete matt;
    return 0;
}