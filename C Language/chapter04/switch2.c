#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int i = rand() % 3;
    switch (i) {
    case 0:
        printf("����\n");
        break;
    case 1:
        printf("����\n");
        break;
    case 2:
        printf("��\n");
        break;
    defalut:
        printf("�����\n");
    }
    return 0;
}
