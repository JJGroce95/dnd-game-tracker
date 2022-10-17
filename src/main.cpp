#include <iostream>

#include <iostream>

int main(int argc, char *argv[])
{

    while (argv[0] != "exit")
    {
        static char *firstCommand = argv[0];
        // need to change command to case does not matter

        // Dice Roll Command
        if (firstCommand == "roll")
        {
            if (argv[1])
            {
                // check next argument
            }
        }
        // Add Character Command
        else if (firstCommand == "add")
        {
        }
        // Remove Character Command
        else if (firstCommand == "remove")
        {
        }
        // Initiative Command
        else if (firstCommand == "initiative")
        {
        }
        // Skill check Command
        else if (firstCommand == "check")
        {
        }
        // Ability Save Command
        else if (firstCommand == "save")
        {
        }
        // Action Command
        else if (firstCommand == "action")
        {
        }
        // Help Command
        else if (firstCommand == "help")
        {
        }
    }

    return 0;
}