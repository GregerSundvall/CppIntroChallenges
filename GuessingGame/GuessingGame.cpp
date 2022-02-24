#include <iostream>

using namespace std;


int main()
{
    bool play = true;

    while (play)
    {
        int secret = 0;
        int guess = -1;
        int guesses = 0;

        srand(time(nullptr));
        secret = rand() % 10;

        cout << "Guess the number, from 0 to 9" << endl;
        
        while (guess != secret)
        {
            
            cin >> guess;
            bool validInput = (guess >= 0 && guess <= 9);
            if (!validInput)
            {
                cout << "I said 0 to 9. Have you finished 2nd grade? Guess again." << endl;;
                continue;
            }
            
            guesses++;
            
            if (guess < secret)
            {
                cout << "Too low. Try again." << endl;
            } else if (guess > secret)
            {
                cout << "Too high. Try again." << endl;
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
    
    return 0;
}
