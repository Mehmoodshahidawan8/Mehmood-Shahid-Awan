#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    
    std::srand(std::time(0));

    
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Try to guess it!" << std::endl;

   
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        
        if (userGuess == randomNumber) {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        } else if (userGuess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}

