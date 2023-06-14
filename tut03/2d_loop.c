// 2D loop demo
// Written by Catherine Cheng 14-16-2023
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int row = 0;
    while (row < n) {
        // print one row
        int col = 0;
        while (col < n) {
            printf("X");
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
