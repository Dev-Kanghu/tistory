#include <stdio.h>

void p(int num);

int main(void) {
    int num = 2;
    p(num);

    num = num + 3;
    p(num);

    num = num - 1;
    p(num);

    num = num * 3;
    p(num);

    num = num / 2;
    p(num);
    return 0;
}

void p(int num) {
    printf("num�� %d�Դϴ�.\n", num);
}