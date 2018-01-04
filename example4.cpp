#include <iostream> 

// function main begins program execution
int main() {
    //declaring and initializing variables 
    int number1{0};
    int number2{0};
    int sum{0};

    std::cout <<"Enter first integer: "; //prompt user for data
    std::cin >> number1; //read first integer from user into number1

    std:: cout <<"Enter second integer: "; //prompt user for data
    std::cin >> number2; //read second integer into number 2

    sum = number1 + number2;

    std::cout <<"Sum is" << sum << endl; //display sum; endl line
}

