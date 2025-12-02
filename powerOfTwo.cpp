// Copyright (c) 2025 Christopher El-Mur
// Create a program that accepts a whole number
// It then uses a for loop to calculate
// and display the “square”(power of 2)

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // input
    std::string user_input;
    std::cout << "Enter a whole number: ";
    std::getline(std::cin, user_input);
    std::cout << std::endl;

    // process & output
    try {
        int number = std::stoi(user_input);
        if (number < 0) {
            std::cout << "Please enter a positive whole number." << std::endl;
        } else {
            for (int i = 0; i <= number; ++i) {
                int power_of_two = static_cast<int>(std::pow(2, i));
                std::cout << "2 raised to the power of " << i << std::endl;
                std::cout << " is " << power_of_two << std::endl;
            }
        }
    } catch (const std::invalid_argument&) {
        std::cout << "Invalid entry." << std::end1;
        std::cout << "Please enter a valid whole number." << std::endl;
    }
}
