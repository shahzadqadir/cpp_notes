#include <iostream>

using namespace std;

void check_variable_lengths() {
    cout << "int: " << sizeof(int) << " bytes." << endl
    << "short: " << sizeof(short) << " bytes." << endl
    << "long: " << sizeof(long) << " bytes." << endl
    << "char: " << sizeof(char) << " bytes." << endl
    << "float: " << sizeof(float) << " bytes." << endl
    << "double: " << sizeof(double) << " bytes." << endl;
}

void initialize_and_print_variables() {
    int size = 10;
    float weight = 4.45F;
    long time_since_1970 = 10000L;
    char initial = 's';
    double marks_percent = 97.5;

    cout << "Size: " << size << endl
         << "Weight: " << weight << endl
         << "Time Since 1970: " << time_since_1970 << endl
         << "Initial: " << initial << endl
         << "Marks Percentage: " << marks_percent << endl;
}

void auto_type_detection() {
    auto size = 10;
    auto weight = 4.45F;
    auto time_since_1970 = 10000L;
    auto initial = 's';
    auto marks_percent = 97.5;

    cout << "Size: " << size << endl
         << "Weight: " << weight << endl
         << "Time Since 1970: " << time_since_1970 << endl
         << "Initial: " << initial << endl
         << "Marks Percentage: " << marks_percent << endl;
}

void strings_and_chars() {
    char ch = 'a';
    cout << ch << endl; // returns a
    cout << +ch << endl; // returns 97, numeric value of a

    char ch2 = 98;
    cout << ch2 << endl;    // returns a b

    string name = "Shahzad Qadir";
    cout << name << endl;

    string name2;
    cout << "Enter your name: ";
    getline(cin, name2);
    cout << "Hi, " << name2 << endl;    // notice spaces don't work here!
    

    string name3;
    cout << "Enter your full name, please: ";
    getline(cin, name3);
    cout << "Hi, " << name3 << endl;
}

void number_arrays() {
    int numbers[5];
    cout << numbers[0] << endl; // default 0 is assigned to each element
    numbers[0] = 15;
    cout << numbers[0] << " is assigned to numbers[0]" << endl
         << numbers[6] << " out of range but no exception." << endl;

    int numbers2[] = {10, 20};
    cout << "number 1: " << numbers2[0] << endl
         << "number 2: " << numbers2[1] << endl;
}

void type_conversions() {
    int x = 10;
    double y = 5.0;
    int z = x + y;

    cout << "Z: " << z << endl;  //c++ auto converted y to int and stored results into z.
                        // we can manually convert the types too, required in most cases.
    
    int a = 5;
    double b = 5.5;
    int c = a + (int) b;    // C style conversion
    cout << "C: " << c << endl;

    int j = 5;
    double k = 9.1;
    int r = j + static_cast<int>(k);    // C++ style conversion, preferred as it can give compiler error.
    cout << "r: " << r << endl;

}
// Variable Types and Sizes in C++

// int: 4 bytes
// short: 2 bytes
// long: 8 bytes
// char: 1 byte
// float: 4 bytes
// double: 8 bytes 
// boolean: 1 byte

// Inializing variables in C++

// Due to precision loss, use double instead of float in most situations
// When initializing float, put a capital or small f at the end
// when initializing long, put a capital or small L at the end

// Modern C++ allows auto detection of variable types but C++ still remains statically typed language
// the type detected depends on the initialization value and can not be changed later in the code.
// trailing f make sure compiler detects the variables as correct type float.

// String and char types
// char types can only store single character. Characters are stored as a number but displayed as character
// use getline to get strings. getline is include in std namespace. getline takes 2 arguments; input stream (cin) and variable name.

// Arrays of numbers can be used to store multiple numbers, declare how many numbers you want to store when declaring array.
// each array element can be accessed using arrayName[elementNumber], elementNumber start from 0. if you use an elementNumber that is out of index
// c++ program will still compile and don't throw an exception.
// If you know all the values, you can initialize then when declaring ararys, in that case you don't need to specify the lenght of arrays



int main() {
    
    type_conversions();
    
    return 0;
}