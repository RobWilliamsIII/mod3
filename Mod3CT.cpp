/*
 * Mod2CT.cpp
 *
 *  Created on: Aug 08, 2024
 *      Author: robwilliams
 */

#include <iostream>

using namespace std;

int main() {
    // Declare variables to store integer values
    int integer1, integer2, integer3;

    // Prompt the user to enter three integer values
    cout << "Enter the first integer: ";
    cin >> integer1;
    cout << "Enter the second integer: ";
    cin >> integer2;
    cout << "Enter the third integer: ";
    cin >> integer3;

    // Use the new operator to dynamically allocate memory for integer pointers
    int* ptr1 = new int;  // Allocating memory for an integer and assigning its address to ptr1
    int* ptr2 = new int;  // Allocating memory for an integer and assigning its address to ptr2
    int* ptr3 = new int;  // Allocating memory for an integer and assigning its address to ptr3

    // Store the values in dynamic memory
    *ptr1 = integer1;  // Storing the value of num1 in the memory location pointed to by ptr1
    *ptr2 = integer2;  // Storing the value of num2 in the memory location pointed to by ptr2
    *ptr3 = integer3;  // Storing the value of num3 in the memory location pointed to by ptr3

    // Display the values of the variables
    cout << "Values of variables:" << endl;
    cout << "num1 = " << integer1 << endl;
    cout << "num2 = " << integer2 << endl;
    cout << "num3 = " << integer3 << endl;

    // Display the contents of the pointers
    cout << "Values pointed to by pointers:" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;  // Output the value stored at the memory location pointed to by ptr1
    cout << "*ptr2 = " << *ptr2 << endl;  // Output the value stored at the memory location pointed to by ptr2
    cout << "*ptr3 = " << *ptr3 << endl;  // Output the value stored at the memory location pointed to by ptr3

    // Use the delete operator to deallocate memory
    delete ptr1;  // Deallocating the memory previously allocated to ptr1
    delete ptr2;  // Deallocating the memory previously allocated to ptr2
    delete ptr3;  // Deallocating the memory previously allocated to ptr3

    return 0;
}
