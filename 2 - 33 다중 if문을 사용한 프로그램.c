#include <stdio.h>
int main() {
	int age;
	printf("����� ���̴�?\n");
	scanf_s("%d", &age);
	if (age >= 20)
		printf("A �ڽ��� ����ϼ���.\n");
	else if (age >= 15)
		printf("B �ڽ��� ����ϼ���.\n");
	else
		printf("C �ڽ��� ����ϼ���.\n");
	return 0;
}