#include <stdio.h>
int main() {
	int cap;
	printf("���� ������ ������? (1.�̱� 2.�Ϻ� 3.�߱�)\n");
	scanf_s("%d", &cap);
	switch (cap) {
	case 1: printf("�̱� : ������ D.C. \n"); break;
	case 2:printf("�Ϻ� : ���� \n"); break;
	case 3:printf("�߱� : ����¡ \n"); break;
	default: printf("�Է� �����Դϴ�. \n"); break;
	}
	return 0;
}