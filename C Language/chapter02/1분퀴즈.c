#include <stdio.h>

int main(void) {
	char str1[256], str2[256];
	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str1, sizeof(str1));
	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str2, sizeof(str2));
	printf("ù ��° ���ڿ� : %s\n", str1);
	printf("�� ��° ���ڿ� : %s\n", str2);
	return 0;
}