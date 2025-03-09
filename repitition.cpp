#include <iostream>

using namespace std;

void print_even_numbers() {
    for (int i=0; i<100; i++) {
        if (i % 2 == 0)
            cout << i << endl;
    }
}

void print_factorial(int number) {
    int result = 1;
    for (int i=1; i<number+1; i++) {
        result *= i;
    }
    cout << result;
}

void print_array_old_method() {
    int numbers[] = {10, 20, 30, 40, 50};    
    for (int i=0; i < sizeof(numbers)/sizeof(int); i++)
        cout << numbers[i] << endl;
}

void print_array_new_method() {
    int numbers[] = {10, 20, 30, 40, 50};
    for (int number: numbers)
        cout << number << endl;
}

void print_str_characters() {
    string name = "Shahzad Qadir";
    for (char n: name)
        cout << n << endl;
}

void print_average_temp() {
    int tempratures[] = {40, 50, 60, 55};
    double sum = 0;
    int count = sizeof(tempratures)/sizeof(int);
    for (int temp: tempratures)
        sum += temp;
    double averageTemprature = sum/count;

    cout << "Average Temprature: " << averageTemprature << endl;
}

void while_loop_example() {
    int i=0;
    while (i >= 0) {
        cout << "Enter a number -1 to break: ";
        cin >> i;
        if (i < 0) break;
    }
}

void print_stars() {
    cout << "ROWS: ";
    int rows = 0;
    cin >> rows;
    for (int i=0; i<rows; i++) {
        for (int j=i; j>=0; j--)
            cout << '*';
        cout << endl;
    }
}

// For loops
// for (int i=0; i<10; i++) {
    //things to do.
// }

// While loop
// First initialize the variable before defining while loop
// define action in the while loop
// update variable
// add a break condition


int main() {

    print_stars();
    return 0;
}