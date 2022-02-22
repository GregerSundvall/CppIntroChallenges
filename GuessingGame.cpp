#include <iostream>

using namespace std;


void guessing_game()
{
    // TODO: Handle faulty input.
    
    bool play = true;

    while (play)
    {
        int secret = 0;
        int guess = 0;
        int guesses = 0;

        srand(time(nullptr));

        secret = rand() % 10;

        cout << "Guess the number, from 0 to 9" << endl;

        while (guess != secret)
        {
            guesses++;
            cin >> guess;
            if (guess < secret)
            {
                cout << "Too low. Try again." << endl;
                guesses++;
            } else if (guess > secret)
            {
                cout << "Too high. Try again." << endl;
                guesses++;
            }
            else
            {
                cout << "Finally!" << endl;
                cout << "It took you a painful " << guesses << " tries." << endl;
                cout << "Wanna play another round? (y/n)" << endl;
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


