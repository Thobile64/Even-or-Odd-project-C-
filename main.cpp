
// C++ program to generate a random value and let a user guess whether the number generated even or odd
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // random number generator
    srand(time(0));

    // Generate a random number between 1 and 1000
    int x = rand() % 1000 + 1;

    string Userguess;
    //promt a user to enter the guess
    cout << "Guess if the number generated even or odd? (Type 'EVEN' or 'ODD'): ";
    cin >> Userguess;

    //Finding out whether the guess is even or odd
    string Random = (x % 2 == 0) ? "EVEN" : "ODD";

    //displaying the random genarated number
    cout << "The Genarated number is: " << x << endl;

    // Check if the guess is correct
    if (Userguess == Random) {
        cout << "Your Guess is Correct!" << endl;
    } else {
        cout << "Your Guess is Incorrect!" << endl;
    }

    return 0;
}
