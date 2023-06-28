// String demo
// Written by Catherine Cheng z5310517
#define SIZE 6
#define MAX_SIZE 100
#include <string.h>
#include <stdio.h>
int main(void) {
    //  what is a string?
    // array of characters
    
    //  how do we declare and initialise a string?
    //char str[SIZE] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = "hello";
    printf("%lu\n", strlen(str2));

    char dest[MAX_SIZE];
    // how do we scan in a string
    fgets(dest, MAX_SIZE, stdin);
    //  how do we print a string?
    printf("%s\n", dest);
    
    //  how do we loop through a string?
    char *string3;
    int i = 0;
    while (string3[i] != '\0') {

        i++;
    }

    return 0;
    

}
