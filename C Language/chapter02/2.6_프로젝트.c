#include <stdio.h>

int main(void) {
    char name[256];
    int age;
    float weight;
    double height;
    char what[256];

    printf("�̸��� ������? ");
    scanf_s("%s", name, sizeof(name));

    printf("�� ���̿���? ");
    scanf_s("%d", &age);

    printf("�����Դ� �� kg�̿���? ");
    scanf_s("%f", &weight);

    printf("Ű�� �� cm����? ");
    scanf_s("%lf", &height);

    printf("� ���˸� ���������? ");
    scanf_s("%s", what, sizeof(what));

    printf("\n\n--- ������ ���� ---\n\n");
    printf("�̸�    : %s\n", name);
    printf("����    : %d\n", age);
    printf("������  : %.1f\n", weight);
    printf("Ű      : %.1lf\n", height);
    printf("���˸�  : %s\n", what);

    return 0;
}