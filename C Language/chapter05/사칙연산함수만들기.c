#include <stdio.h>

void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void) {
    int num = 2;
    p(num);
    num = add(num, 3);
    p(num);
    num = sub(num, 1);
    p(num);
    num = mul(num, 3);
    p(num);
    num = div(num, 6);
    p(num);
    return 0;
}

void p(int num) {
    printf("num�� %d�Դϴ�.\n", num);
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}