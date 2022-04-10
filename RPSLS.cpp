/* This is a Rock, Paper, Scissors, Lizard, Spock game by the TV show The Big Bang Theory:
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors. */

#include <iostream>
#include <stdlib.h>

int main() {

  // Live long and prosper

  srand (time(NULL));

  int computer;
  int user = 0;

  do {
    computer = rand() % 5 + 1;
    std::cout << "=================================\n";
    std::cout << "rock paper scissors lizard spock!\n";
    std::cout << "=================================\n";
  
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) 🤌\n";
    std::cout << "5) 🖖\n";
    std::cout << "else) quit\n";
  
    std::cout << "shoot! ";
    std::cin >> user;

    // display computer's random value
    //std::cout << "computer: " << computer << "\n";

    switch(user) {
      case 1: // Rock
        std::cout << "you: rock\n";

        // Spock vaporizes Rock
        if(computer == 5) {
          std::cout << "them: Spock\n";
          std::cout << "You lost!\n";
        }
        // Rock crushes Lizard
        else if(computer == 4) {
          std::cout << "them: lizard\n";
          std::cout << "You win!\n";
        }
        // Rock crushes Scissors
        else if(computer == 3) {
          std::cout << "them: scissors\n";
          std::cout << "You win!\n";
        }
        // Paper covers Rock
        else if(computer == 2) {
          std::cout << "them: paper\n";
          std::cout << "You lost!\n";
        }
        else {
          std::cout << "them: rock\n";
          std::cout << "It's a tie!\n";
        }
        break;
      case 2: // Paper
        std::cout << "you: paper\n";

        // Paper disproves Spock
        if(computer == 5) {
          std::cout << "them: Spock\n";
          std::cout << "You win!\n";
        }
        // Lizard eats Paper
        else if(computer == 4) {
          std::cout << "them: lizard\n";
          std::cout << "You lost!\n";
        }
        // Scissors cuts Paper
        else if(computer == 3) {
          std::cout << "them: scissors\n";
          std::cout << "You lost!\n";
        }
        // Paper covers Rock
        else if(computer == 1) {
          std::cout << "them: rock\n";
          std::cout << "You win!\n";
        }
        else {
          std::cout << "them: paper\n";
          std::cout << "It's a tie!\n";
        }
        break;
      case 3: // Scissors
        std::cout << "you: scissors\n";

        // Spock smashes Scissors
        if(computer == 5) {
          std::cout << "them: Spock\n";
          std::cout << "You lost!\n";
        }
        // Scissors decapitate Lizard
        else if(computer == 4) {
          std::cout << "them: lizard\n";
          std::cout << "You win!\n";
        }
        // Scissors cuts Paper
        else if(computer == 2) {
          std::cout << "them: paper\n";
          std::cout << "You win!\n";
        }
        // Rock crushes Scissors
        else if(computer == 1) {
          std::cout << "them: rock\n";
          std::cout << "You lost!\n";
        }
        else {
          std::cout << "them: scissors\n";
          std::cout << "It's a tie!\n";
        }
        break;
      case 4: // Lizard
        std::cout << "you: lizard\n";

        // Lizard poisons Spock
        if(computer == 5) {
          std::cout << "them: Spock\n";
          std::cout << "You win!\n";
        }
        // Scissors decapitate Lizard
        else if(computer == 3) {
          std::cout << "them: scissors\n";
          std::cout << "You lost!\n";
        }
        // Lizard eats Paper
        else if(computer == 2) {
          std::cout << "them: paper\n";
          std::cout << "You win!\n";
        }
        // Rock crushes Lizard
        else if(computer == 1) {
          std::cout << "them: rock\n";
          std::cout << "You lost!\n";
        }
        else {
          std::cout << "them: lizard\n";
          std::cout << "It's a tie!\n";
        }
        break;
      case 5: // Spock
        std::cout << "you: Spock\n";
        
        // Lizard poisons Spock
        if(computer == 4) {
          std::cout << "them: lizard\n";
          std::cout << "You lost!\n";
        }
        // Spock smashes Scissors
        else if(computer == 3) {
          std::cout << "them: scissors\n";
          std::cout << "You win!\n";
        }
        // Paper disproves Spock
        else if(computer == 2) {
          std::cout << "them: paper\n";
          std::cout << "You lost!\n";
        }
        // Spock vaporizes Rock
        else if(computer == 1) {
          std::cout << "them: rock\n";
          std::cout << "You win!\n";
        }
        else {
          std::cout << "them: lizard\n";
          std::cout << "It's a tie!\n";
        }
        break;
    }
  } while (user == 1 || user == 2 || user == 3 || user == 4 || user == 5);
  

}