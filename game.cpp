
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 7;

    cout << "============================\n";
    cout << "     GUESS THE NUMBER!\n";
    cout << "============================\n";
    cout << "I have selected a number from 1 to 100.\n";
    cout << "You have 7 attempts to guess it.\n\n";

    for (int i = 1; i <= attempts; i++) {
        cout << "Attempt " << i << "/7: Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed it!\n";
            cout << "Attempts used: " << i << "\n";
            return 0;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try a higher number.\n";
        }
        else {
            cout << "Too high! Try a lower number.\n";
        }
    }

    cout << "\nGame over! The number was "
         << secretNumber << ".\n";

    return 0;
}
