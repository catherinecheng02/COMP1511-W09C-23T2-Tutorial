#include <stdio.h>
#define SIZE 5
void square_array(int length, int array[length]) {

    for (int i = 0; i < length; i++) {
        array[i] = array[i]*array[i];
    }
}

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};
    
    square_array(SIZE, array);
    // print array 
    int i = 0;
    while (i < SIZE) {
        printf("%d\n", array[i]);
        i++;
    }
    return 0;
}
