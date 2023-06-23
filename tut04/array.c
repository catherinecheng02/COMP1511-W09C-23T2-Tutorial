// Arrays demo 
// Written by Catherine Cheng (z5310517)

#include <stdio.h>
#define SIZE 5
int main(void) {
    // What is an array?
    // collection of elements of the same data type

    // How do we initialise an array?
    int array[SIZE] = {2, 4, 7, 11, 13};

    // How do we print out an array?
    int i = 0;
    while (i < SIZE) {
        printf("%d\n", array[i]);
        i++;
    }
    
    
    
    return 0;
}
