#include <stdio.h>

int main(void) {
	int age = 25;
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�.\n");
	}else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�.\n");
	}else {
		printf("û�ҳ��� �ƴմϴ�.\n");
	}
	return 0;
}