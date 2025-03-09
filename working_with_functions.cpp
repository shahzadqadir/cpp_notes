#include <iostream>

using namespace std;

string fullname(string firstName, string lastName) {
    return firstName + ", " + lastName;
}

int max_of_two(int number1, int number2) {
    if (number1 > number2) 
        return number1;
    return number2;
}

int max_of_two_v2(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

double calculateTax(double income, double taxRate = 0.2) {
    return income * taxRate;
}

void greet(string name) {
    cout << "Hello, " << name << endl;
}

void greet(string title, string name) {
    cout << "Hello, " << title << " " << name << endl;
}

double increasePrice(double price) {
    // By default price is passed as a copy
    return price * 1.2;
}

void increasePriceV2(double& price) {
    // price is passed by reference so original price will be updated,
    // no need to return anything.
    price *= 1.2;
}

void greeting(const string& name) {
    cout << "Hello, " << name << endl;
}


// functions can take nothing and return nothing
// void test () {
    // run cpp statements.
// }
// functions can also have some return type like string, int, etc
// like main function that has return value of int
// Same like Python, if a parameter has a default value it should come after the parameters without default value.
// Signature of a function means, name of function + number and type of parameters
// Functions with same name but different parameters is called function overloading.
// When overloading functions, function signatures must be different.
// By default values are passed by value (copy) in c++. If value is changed inside function that don't effect the variable's passed value.
// For integers, it is ok to pass by copy/value
// It is a good idea to pass strings as reference as strings can be pretty large and a copy will be a waste, but make sure you don't accidently change
// value of parameter inside function as that will change original value too. This can be avoided by using const in the parameter list.
// If you want to use a function that is defined after where you are using it, copy its signature before where it is used.

void greeting2();

int main() {

    greeting("Shahzad");
    greeting2();
}

void greeting2() {
    cout << "Hello, Someone." << endl;
}