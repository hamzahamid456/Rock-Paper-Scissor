#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

// Function to determine the winner
string determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    }

    switch (userChoice) {
        case 1: // Rock
            if (computerChoice == 2) { // Paper
                return "Paper covers rock! Computer wins!";
            } else { // Scissors
                return "Rock smashes scissors! You win!";
            }
        case 2: // Paper
            if (computerChoice == 1) { // Rock
                return "Paper covers rock! You win!";
            } else { // Scissors
                return "Scissors cut paper! Computer wins!";
            }
        case 3: // Scissors
            if (computerChoice == 1) { // Rock
                return "Rock smashes scissors! Computer wins!";
            } else { // Paper
                return "Scissors cut paper! You win!";
            }
        default:
            return "Invalid choice!";
    }
}

int main() {
    srand(time(0)); // Seed the random number generator

    int userChoice;
    int computerChoice;

    cout << "Welcome to Rock-Paper-Scissors!" << endl;
    cout << "Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ";
    cin >> userChoice;

    computerChoice = rand() % 3 + 1; // Generate a random choice for the computer

    cout << "You chose: ";
    switch (userChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << "Computer chose: ";
    switch (computerChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
    }

    cout << determineWinner(userChoice, computerChoice) << endl;

    return 0;
}