#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0) {
        printf("가위\n");
    }
    else if (i == 1) {
        printf("바위\n");
    }
    else if (i == 2) {
        printf("보\n");
    }
    else {
        printf("몰라요\n");
    }
    return 0;
}