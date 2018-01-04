#include <iostream>

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; //program uses endl

//function main begins program execution
int main() {
    int number1{0};
    int number2{0};

    cout <<"ENter two integers to compare: "; // prompt user for data
    cin >> number1 >> number2; // reat integer into number 1 and number2
    
    if(number1 == number2) {
        cout << number1 << " == " << number2 << endl;
    }
    if(number1 != number2) {
        cout << number1 << " != " << number2 << endl;
    }
    if (number1 < number2) {
        cout << number1 << " < " << number2 << endl;
    }
    if (number1 > number2) {
        cout << number1 << " > " << number2 << endl;
    }
    if (number1 <= number2) {
        cout << number1 << " <= " << number2 << endl;
    }
    if (number1 >= number2) {
        cout << number1 << " >= " << number2 << endl;
    }
}
