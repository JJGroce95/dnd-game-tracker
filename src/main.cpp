#include <iostream>
#include <newGame.h>
#include <loadGame.h>
using namespace std;

int main(int argc, char **argv)
{
    int input = 1;

    while (input != 0)
    {
        cout << "[1] LOAD GAME";
        cout << "[2] NEW GAME";
        cout << "[0] EXIT";
        cin >> input;
        switch (input)
        {
        case 1:
            // Load Game
            // if there is a saved game:
            loadGame();

            // no saved games:
            cout << "No saved games " << input;

            break;
        case 2:
            // New Game
            // creates new load game object
            newGame game;

            break;

        default:
            // code block
        }
    }

    return 0;
}