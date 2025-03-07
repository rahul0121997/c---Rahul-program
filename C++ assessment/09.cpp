#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int guess, random, count = 0;
    srand(time(NULL));
    cout << "welcome to the guessing number game";
    random = rand() % 100 + 1;
    do
    {
        cout << "\nguess the number between(1-100): ";
        cin >> guess;
        count++;

        if (guess > random)
        {
            cout<<"\nenter smaller number";
        }
        else if (guess < random)
        {
            cout<<"\nplease enter a larger number.";
        }
        else
        {
            cout<<"\ncongratulation !! you have successfully guessed number in attemp :"<<count;
        }

    } while (guess != random);
    cout<<"\nBye Bye thanks for playing";
    return 0;
}