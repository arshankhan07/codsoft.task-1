#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Generate a random number between 1 and 100
    srand(static_cast<unsigned int>(time(0)));  // seed for random number generation
    int randomNumber = rand() % 100 + 1;       // random number between 1 and 100
    
    int guess;
    int attempts = 0;
    
    cout << "Guess the number (between 1 and 100): ";

    do {
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! one more try: ";
        } else if (guess < randomNumber) {
            cout << "Too low! one more try: ";
        } else {
            cout << "Congratulations! You guessed the correct number " << randomNumber
                 << " in " << attempts << " attempts." << endl;
        }
    } while (guess != randomNumber);
}
