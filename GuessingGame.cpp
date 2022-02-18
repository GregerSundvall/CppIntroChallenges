#include <iostream>
#include <ppltasks.h>

using namespace std;


void guessing_game()
{
    bool play = true;

    while (play)
    {
        int secret;
        int guess;

        srand(time(nullptr));

        secret = rand() % 10;

        cout << "Guess the number, from 0 to 9" << endl;

        while (guess != secret)
        {
            cin >> guess;
            if (guess < secret)
            {
                cout << "Too low. Try again." << endl;
            } else if (guess > secret)
            {
                cout << "Too high. Try again." << endl;
            }
            else
            {
                cout << "Correct!" << endl;
                cout << "Wanna play a new round? (y/n)" << endl;
                char retry;
                cin >> retry;
                if (retry != 'y')
                {
                    play = false;
                }
            }
        }
    }
};


