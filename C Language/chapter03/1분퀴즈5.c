#include <stdio.h>

int main(void) {
	for (int i = 5; i < 8; i++) {
		printf("%d´Ü Ãâ·Â\n", i);
		for (int j = 3; j < 6; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}