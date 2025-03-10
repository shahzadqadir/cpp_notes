#include <iostream>
#include <memory>



using namespace std;

// Examples

void pointer_example() {
    // define a pointer and initialize
    int number = 10;

    int* numPtr = &number;  // that's how you can assign memory location of another variable to it.

    cout << numPtr << endl; // print memory location of number.

    cout << *numPtr << endl; // print value stored at memory location in pointer.

    // change value of number using pointer 

    *numPtr = 20;
    cout << "New value for number is: " << number << endl;
}

// pointers are variables which hold address for other variables.
// pointers are declared like int* pointerName
// initialize them with nullptr to avoid them having garbage in them.

// You can declare a constant variable with not constact pointer

// Passing parameters by reference

// Pointers to arrays point to first element of the array

// Dynamic memory allocation with pointers
// Pointers can be used to allocate memory for data structures like arrays dynamically so they can expand when needed
// Memory allocated this way is Heap memory and need to be cleared manually whereas memory used for normal variable declaration is Stack memory
// and gets cleared as soon as variable goes out of scope.

void arrayPointers() {
    int numbers[] = {5, 6, 7, 8, 9, 10};
    int* numbersPtr = numbers;      // notice we don't need to pass reference &, arrays are always passed by refreence
    cout << *numbersPtr << endl;    // I would expect to see first element of array (5)
    numbersPtr++;   // this increate pointer by 4, size of data type, now points to numbers[1] (6)
    cout << *numbersPtr << endl; 

}

void increasePrice(double& price) {
    price *= 1.2;
}

void constant_pointer() {
    const int number = 10;
    const int* numPtr = &number; // even though it might look like pointer is constant it is not, const keyword is required as pointer is referring to a constant.
    cout << *numPtr << endl;    // should proint 10;
    // *numPtr = 20;  NOT ALLOWED as variable this pointer is reffering to is a constant.

    int number2 = 10;
    int* const numPtr2 = &number2;   // constant pointer pointing to an int variable

    const int number3 = 10;
    const int* const numPtr3 = &number3;    // constant pointer pointing to a constant number.

}

void swap(int* number1, int* number2) {
    int temp = 0;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void dynamicMemoryAllocation() {
    int* numbers = new int[10];
    numbers[1] = 10;

    cout << numbers[1];

    // once done with it
    delete[] numbers;
    numbers = nullptr;  // reset pointer.
}

void unique_pointers() {
    // need to #include <memory>
    // unique_ptr<int> x(new int); //unique_ptr is a class so has syntax like this.

    // or a newer syntax

    auto numbers = make_unique<int[]>(10); // pointer array of 10 elements.
    auto y = make_unique<int>();

    // memory de-allocation is done automatically by unique pointers.

}

int main() {
    
    // double price = 100;
    // increasePrice(price);
    // cout << price << endl; // it should print 120 instead of 100 now.

    // int num1 = 10;
    // int num2 = 20;

    // cout << "original values num1: " << num1 << " num2: " << num2 << endl;
    // swap(&num1, &num2);
    // cout << "After Swap num1: " << num1 << " num2: " << num2 << endl;

    int capacity = 5;
    int* numbers = new int[capacity];
    int entries = 0;

    while (true) {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail()) break;
        entries++;
        if (entries == capacity) {
            capacity *= 2;
            int* temp = new int[capacity];
            for (int i=0; i < entries; i++) {
                temp[i] = numbers[i];
            }
            delete[] numbers;
            numbers = temp;
        }
    }



    for (int i=0; i < entries; i++)
        cout << numbers[i] << endl;

    delete[] numbers;


    return 1;
}