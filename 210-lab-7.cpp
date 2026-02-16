// comsc 210 | Martha Stephanie Villalta | Lab #7
#include <iostream>
#include <string>

using namespace std;


// function prototypes:
string* reverseArray(string *, int);
void displayArray(string *, int);

int main(){
    int size = 5;

    string *names = new string[size];
    //create a dynamic string array. pop. w/5 names.
    // the array is going to accept 5 names, so I just needs to hard code 5 names
    // using pointer notation (we are using pointers, X array notation.)
    *(names + 0) = "Ricky";
    *(names + 1) = "Melba";
    *(names + 2) = "Rita";
    *(names + 3) = "Carlos";
    *(names + 4) = "Araceli";
    // use functions to reverse & output.
    // I am going to need to call the functions and pass the array to them:

    cout << "Original Array: ";
    displayArray(names, size); // I am passing size b/c it is the value of the array size
    //it needs to loop over/through.

    cout << "Reversed Array: ";
    displayArray(names, size); // I am calling displayArray() again because we need to
    // output the original array and then the values after being reversed.

    delete [] names;
    return 0;
}

//reverseArray() function. ?How can I reverse an array?
