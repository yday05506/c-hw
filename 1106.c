#include <stdio.h>

void main(void)
{
	//변수를 선언하고 가리킴
	int a;
	char b;
	double c;

	int* ptr1 = &a;
	char* ptr2 = &b;
	double* ptr3 = &c;

	//변수 메모리 크기
	int size1, size2, size3;
	size1 = sizeof(a);
	size2 = sizeof(b);
	size3 = sizeof(c);
	printf("a가 차지하는 메모리 크기 : %d\n", size1);
	printf("b가 차지하는 메모리 크기 : %d\n", size2);
	printf("c가 차지하는 메모리 크기 : %d\n", size3);
	printf("\n");

	int size4, size5, size6;
	size4 = sizeof(ptr1);
	size5 = sizeof(ptr2);
	size6 = sizeof(ptr3);
	printf("a가 차지하는 포인터 메모리 크기 : %d\n", size4);
	printf("b가 차지하는 포인터 메모리 크기 : %d\n", size5);
	printf("c가 차지하는 포인터 메모리 크기 : %d", size6);
}