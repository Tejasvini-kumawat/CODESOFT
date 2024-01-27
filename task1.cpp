#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
   
    // Seed the random number generator
    
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = 1 + (rand() % 100);

    cout << "Welcome to Guess the Number!" <<endl;
    cout << "You have to guess a number between 1 and 100.Good Luck!"<< endl;

    int GamerChoice;
   

    while (true) {
        // Get user's guess
        cout << "Enter your guess: ";
        cin >> GamerChoice;
       

        // Check if the guess is correct
        if ( GamerChoice == secretNumber) {
            cout << "Congratulations! You guessed the correct number " << secretNumber<<endl;
            break;
        } else if (GamerChoice< secretNumber) {
            cout << "Too low! Please Try again." << endl;
        } else {
            cout << "Too high! Please Try again." <<endl;
        }
    }

    return 0;
}
