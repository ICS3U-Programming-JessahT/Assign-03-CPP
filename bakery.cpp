// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// Date : Oct 24, 2022
// Program asks how many croissant the user bought, if the user has 6 or more
// The user doesn't pay tax, if any lower they pay with tax

#include <iomanip>
#include <iostream>

int main() {
    // Declaring constants and variables
    float total, subtotal, totalWithTax, tax;
    float const cost = 2.55;
    float const HST = 0.13;
    std::string croissantStr;
    int croissantInt;

    // Get input from user
    std::cout << "Insert amount of croissants: ";
    std::cin >> croissantStr;

    // Try catch any strings
    try {
        // Equations for total
        croissantInt = std::stoi(croissantStr);

        total = croissantInt * cost;

        subtotal = croissantInt * cost;

        tax = subtotal * HST;

        totalWithTax = subtotal + tax;
        // Nested if statements
        if (croissantInt > 0) {       // Catch any negatives
            if (croissantInt >= 6) {  // When amount greater than 6
                std::cout << "The amount is greater/equal to 6"
                          << "\n";
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "The total without tax is: $" << total << "\n";

            } else if (croissantInt < 6) {  // When amount lower than 6
                std::cout << "The amount is lower than 6, There is tax"
                          << "\n";
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "The total with tax is: $" << totalWithTax << "\n";
            }
        } else {
            std::cout << "That is a negative number";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid input"
                  << "\n";
    }
}
