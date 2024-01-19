#include <stdio.h>

int main(void) {
	char str1[256], str2[256];
	printf("첫 번째 문자열을 입력하세요 : ");
	scanf_s("%s", str1, sizeof(str1));
	printf("두 번째 문자열을 입력하세요 : ");
	scanf_s("%s", str2, sizeof(str2));
	printf("첫 번째 문자열 : %s\n", str1);
	printf("두 번째 문자열 : %s\n", str2);
	return 0;
}