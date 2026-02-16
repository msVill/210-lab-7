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
    *(names + 0) = "Ricky";
    *(names + 1) = "Melba";
    *(names + 2) = "Rita";
    *(names + 3) = "Carlos";
    *(names + 4) = "Araceli";

    cout << "Original Array: ";
    displayArray(names, size); // I am passing size b/c it is the value of the array size
                               //it needs to loop over/through.
    names = reverseArray(names, size);

    cout << "Reversed Array: ";
    displayArray(names, size); // I am calling displayArray() again because we need to
                               // output the original array and then the values after being reversed.

    //Done with known info for now. Moving on to the functions.
    delete[] names;
    return 0;
}

//reverseArray() function. ?How can I reverse an array?
string* reverseArray(string *arr, int size) {
    for (int i = 0; i < size / 2; i++) { 
        string temp = *(arr + i);// this variable needs to hold the values from indicated index before reassignment per loop.
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }
    return arr;
}

void displayArray(string *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}