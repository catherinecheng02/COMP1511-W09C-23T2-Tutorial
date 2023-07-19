// Intro to pointers
// Written by Catherine Cheng z5310517
#include <stdio.h>
int main(void) {
    // Variable recap
    // Declaration of a variable
    int a;
    
    // Initialisation of a variable
    a = 3;
   
    
    // What is a pointer?
    // variable that stores the memory address of other variables
    
  
    // How do you declare a pointer?
    int *ptr;
    

    // How do you initialise a pointer? 
    ptr = &a; // & "address of"
    
    // When do we use "*"?
    // declare our pointer
    // dereference 
    *ptr = 4;
    
    
    // How do we print the value that a pointer is pointing at?
    printf("%d\n", *ptr);
    // How do we print the memory address?
    printf("%p\n", ptr);
}
