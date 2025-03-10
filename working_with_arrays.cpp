#include <iostream>

using namespace std;

void array_unpacking() {
    int values[] = {10, 20, 30};
    auto [x, y, z] = values;
    cout << x << ", " << y << ", " << z << endl;
}

void copy_array() {
    double array1[] = {10.1, 20.3, 11.21, 30.0};
    double array2[size(array1)];

    for (int i=0; i<size(array1); i++) {
        array2[i] = array1[i];
    }
    // print second array to check if copy is done correctly.
    for (double num: array2) {
        cout << num << endl;
    }
}

void iterate_arrays_v1(int numbers[], int size_of_array) {
    /*Note you will have to pass size as an argument as arrays are passed by reference so if you try to take
    size inside function that will not work.*/

    for (int i=0; i < size_of_array; i++){
        cout << numbers[i] << endl;
    }    
}

int linear_search(int arr[], int size, int numberToFind) {
    // O(n) comparisons are required for linear search.
    for (int i=0; i<size; i++) {
        if (arr[i] == numberToFind)
            return i;
    }
    return -1;
}

int binary_search(int arr[], int size, int numberToFind) {
    return -1;
}

void bubble_sort() {
    int arr[] = {11, 2, 9, 7, 1, 21};
    int temp = 0;
    for (int i=size(arr); i>0; i--) {
        for (int j=0; j<i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int num : arr) {
        cout << num << endl;
    }
}



// CPP Arrays 
// can be declared with the type and providing size of array
// int numbers[5] - it declares an array of integers with size of 5
// if you declare and initialize arrays at the same time, compiler will figure out size of array
// from the provided array members

// You can't assign an array to another array. You will have to loop over the original array and copy each
// and every element manually.

// To compare arrays, you will have to loop over arrays and compare them manually, comparision operators == don't work
// as when comparing compiler only compares their memory location.  

// Array unpacking 
// int values[] = {10, 20, 30};
// auto [x, y, z] =  values
// it will automatically assign x=10, y=20, z=30

// Array Search Algorithms
    // Linear Search (O(n))
    // Binary Search

// Array Sorting Algorithms
    // Bubble Sort
    // Merge Sort
    
// multi dimensional arrays
// int matrix[3][5] = {
    // 
//}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    // for (auto number: numbers) {
    //     cout << number << endl;
    // }

    // cout << "index of 30 is " <<  linear_search(numbers, 5, 45) << endl;

    int matrix[2][3] = {
        {10, 20, 30},
        {11, 21, 31}
    };

    for (int row=0; row<2; row++) {
        for (int col=0; col<3; col++) {
            cout << matrix[row][col] << endl;
        }
    }



    return 1;
}