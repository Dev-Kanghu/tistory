#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0) {
        printf("����\n");
    }
    else if (i == 1) {
        printf("����\n");
    }
    else if (i == 2) {
        printf("��\n");
    }
    else {
        printf("�����\n");
    }
    return 0;
}