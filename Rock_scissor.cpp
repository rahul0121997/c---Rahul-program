#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string choices[3] = {"Rock", "Paper", "Scissors"};
    string playerName;
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;
    int totalRounds;

    srand(time(0));

    cout << "Enter your name: ";
    getline(cin, playerName);

    cout << "Welcome " << playerName << " to Rock, Paper, Scissors!" << endl;
    cout << "How many rounds would you like to play? ";
    cin >> totalRounds;

    for (int round = 1; round <= totalRounds; round++) {
        cout << "\nRound " << round << "/" << totalRounds << endl;
        
        cout << "Choose your option: " << endl;
        cout << "0 - Rock" << endl;
        cout << "1 - Paper" << endl;
        cout << "2 - Scissors" << endl;
        
        cout << "Enter your choice (0, 1, or 2): ";
        cin >> playerChoice;

        computerChoice = rand() % 3;

        cout << "You chose: " << choices[playerChoice] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;

        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 0 && computerChoice == 2) || 
                   (playerChoice == 1 && computerChoice == 0) || 
                   (playerChoice == 2 && computerChoice == 1)) {
            cout << "You win this round!" << endl;
            playerScore++;
        } else {
            cout << "Computer wins this round!" << endl;
            computerScore++;
        }
    }

    cout << "\nGame Over!" << endl;
    cout << "Final score: " << playerName << ": " << playerScore << " - Computer: " << computerScore << endl;

    if (playerScore > computerScore) {
        cout << "Congratulations " << playerName << ", you win the game!" << endl;
    } else if (playerScore < computerScore) {
        cout << "Computer wins the game! Better luck next time, " << playerName << "!" << endl;
    } else {
        cout << "It's a tie! Well played, " << playerName << "!" << endl;
    }

    return 0;
}
