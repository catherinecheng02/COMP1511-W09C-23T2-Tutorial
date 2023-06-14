// Enum demo
// Written by Catherine Cheng 14-16-2023
#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

int main(void) {
    enum opal_card_type caths_card;
    caths_card = STUDENT;
    printf("%d\n", caths_card);

    return 0;
}
