// Simple squaring function demo
// Written by Catherine Cheng z5310517
#include <stdio.h>
int square_num(int num);

int main(void) {
    int n = 3;
    int result = square_num(n);
    printf("%d\n", result);
    return 0;
}


int square_num(int num) {
    int square = num*num;
    return square;
}
