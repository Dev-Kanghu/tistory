#include <stdio.h>

int apple(int total, int ate);

int main(void) {
    int ret = apple(5, 2);
    printf("��� 5�� �߿��� 2���� ������ %d���� �����ϴ�.\n", ret);
    return 0;
}

int apple(int total, int ate) {
    printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
    return total - ate;
}
