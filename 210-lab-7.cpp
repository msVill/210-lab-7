/* Description: Program will receive a dynamic string array.
    create 2 functions: 
    - reverseArray(): receives a dynamic string array (from main() function/method),
    reverses the elements, and returns a pointer to the modded array. No output.
    - displayArray: receives a dynamic array (from main) and outputs its elements.
    In main(): create the dynamic string array that will be passed to the other 2 functions.
    Populate it with 5 names of users choice. Call the other functions to reverse and output
    the array.
    --- Use pointer notation.

    Comsc-210 | Lab #7 | Martha Stephanie Villalta
    IDE Used: VS Code
*/

#include <iostream>
using namespace std;

// Function prototypes
string* reverseArray(string* ptr, int size);
void displayArray(string* ptr, int size);

int main() {
    string* names = new string[5];

    *(names + 0) = "Janet";
    *(names + 1) = "Jasper";
    *(names + 2) = "John";
    *(names + 3) = "Joe";
    *(names + 4) = "Juno";

    //Displays the original array elements.
    cout << "Original array: ";
    displayArray(names, 5);

    //Reverses the array elements.
    names = reverseArray(names, 5);
   
    //Display the array elements.
    cout << "\nReversed array: ";
    displayArray(names, 5);

    delete[] names;

    return 0;
}

//I'm so tired!!!

//Function to reverse the array elements.
string* reverseArray(string* ptr, int size) {
    for(int i = 0; i < size / 2; i++) {
        string tempVar = *(ptr + i);
        *(ptr + i) = *(ptr + (size - 1 - i));
        *(ptr + (size - 1 - i)) = tempVar;
    }
    return ptr; //Returns the same pointer, but not it's reversed.
}

//Function to display the array elements.
void displayArray(string* ptr, int size) {
    for(int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
}