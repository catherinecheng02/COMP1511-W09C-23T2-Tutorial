// Scanning fixed number of inputs into array
// Written by Catherine Cheng (z5310517)

#include <stdio.h>
#define SIZE 10
int main(void) {
    // We are going to scan 10 numbers into an array
    int array[SIZE];
    int i = 0;
    while (i < SIZE) {
        scanf("%d", &array[i]);
        // printf("%d\n", array[i]);
        i++;
    }
    i = 0;
    while (i < SIZE) {
        printf("%d\n", array[i]);
        i++;
    }
    
    
}
