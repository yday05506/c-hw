#include <stdio.h>

void main(void)
{
	//������ �����ϰ� ����Ŵ
	int a;
	char b;
	double c;

	int* ptr1 = &a;
	char* ptr2 = &b;
	double* ptr3 = &c;

	//���� �޸� ũ��
	int size1, size2, size3;
	size1 = sizeof(a);
	size2 = sizeof(b);
	size3 = sizeof(c);
	printf("a�� �����ϴ� �޸� ũ�� : %d\n", size1);
	printf("b�� �����ϴ� �޸� ũ�� : %d\n", size2);
	printf("c�� �����ϴ� �޸� ũ�� : %d\n", size3);
	printf("\n");

	int size4, size5, size6;
	size4 = sizeof(ptr1);
	size5 = sizeof(ptr2);
	size6 = sizeof(ptr3);
	printf("a�� �����ϴ� ������ �޸� ũ�� : %d\n", size4);
	printf("b�� �����ϴ� ������ �޸� ũ�� : %d\n", size5);
	printf("c�� �����ϴ� ������ �޸� ũ�� : %d", size6);
}