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
    //!!! use pointer notation (X array notation).

    delete [] names;
    return 0;
}

//reverseArray() function. ?How can I reverse an array?
