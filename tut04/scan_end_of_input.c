// Scanning fixed number of inputs into array
// Written by Catherine Cheng (z5310517)

#include <stdio.h>
int main(void) {
    // scanf return value
    // int input;
    // int input2;
    // int return_val = scanf("%d %d", &input, &input2);
    // printf("%d\n", return_val);


    // we will write a program that will keep scanning in values until
    // the user presses CTRL + D
    int inp;
    
    while (scanf("%d", &inp) == 1) {
        printf("%d\n", inp));
    }
   
}
