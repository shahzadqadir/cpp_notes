#include <iostream>

using namespace std;

void typecase_and_compare() {
    int x = 10;
    double y = 10.5;

    bool result = x == y;
    cout << boolalpha << result;    // without boolalpha 0 for false, 1 for true.
}

void check_multiple_conditions() {
    int age = 10;

    bool result = (age > 18) && (age < 65);
    cout << boolalpha << result;
}

void if_else_statements() {
    int temprature = 45;

    if (temprature > 15 && temprature < 40) {
        cout << temprature << " is Nice" << endl;
    } else if (temprature > 40 && temprature < 60) {
        cout << temprature << " is still bearable!";
    } else {
        cout << "Hide in Air conditioning.";
    }
}

// When comparing two different types compiler does the type conversion from smaller less percise to the larger more precise type.
// for example when comparing integer to double, compiler will type case integer to double before comparing.
// == for equality, != not equal
// && AND, || OR
// When comparing two conditions with and, if first condition is false then compiler will stop there and not check further conditions.
// Not operator (!) is used to negate a boolean value
// operator priority
// () - paranthesis
// ! - NAND 
// && - And
// || - OR

int main() {

    if_else_statements();
    
    return 0;
}