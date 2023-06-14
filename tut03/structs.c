// Struct demo
// Written by Catherine Cheng 14-06-2023
#include <stdio.h>

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

struct animal {

}

int main(void) {
    int i;
    i = 0;

    struct person my_struct;
    my_struct.shoe_size = 3;
    my_struct.height = 160;
    my_struct.first_name_initial = 'c';


    printf("%d\n", my_struct.shoe_size);
    printf("%lf\n", my_struct.height);
    

    return 0;
}
