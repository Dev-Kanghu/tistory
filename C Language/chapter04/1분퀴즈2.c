#include <stdio.h>

int main(void) {
    int bread = 1; // 빵 1개 주문
    int coffee = 3; // 커피 3잔 주문
    if (bread > 0) {
        printf("빵은 조리시간이 5분 이상 걸릴 수 있습니다.\n");
    }
    if (coffee > 0) {
        printf("매장 안에서는 일히용 컵을 사용할 수 없습니다.\n");
    }
    printf("주문이 완료되었습니다.\n");
    return 0;
}