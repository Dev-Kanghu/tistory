#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("난수 초기화 이전...\n");
    for (int i = 0; i < 10; i++) {
        printf("%d", rand() % 10);
    }
    srand(time(NULL));
    printf("\n\n난수 초기화 이후...\n");
    for (int i = 0; i < 10; i++) {
        printf("%d", rand() % 10);
    }
    return 0;
}