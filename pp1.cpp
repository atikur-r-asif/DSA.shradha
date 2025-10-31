//p.p:01(area of square)
//if area=5 then x=5, x=area*area, x=5*5=25 or x=(5)^5=25

#include <iostream>
#include <cmath>                   
int main() {
    
    double side_length;            //using double for floating-point values
    double area;

    std::cout << "--- Square Area Calculator ---" << std::endl;          //user input
    std::cout << "Enter the side length of the square: ";

    if (!(std::cin >> side_length)) {
        std::cerr << "Invalid input. Please enter a valid number." << std::endl;
        return 1;            // return an error code
    }

    if (side_length < 0) {
        std::cerr << "length can't be negative. Please enter a positive number." << std::endl;
        return 1;            // check (-ve) input, length can't (-ve)
    }

    area=side_length*side_length;            //calculate the area (area=side*side)

    std::cout << "\nCalculation Complete:" << std::endl;
    std::cout << "Side Length: " << side_length << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}






// #cmath -- power function and multiplication
// #calculates area of a square based on the side length provided by the user.
// #variable to store the length of the side