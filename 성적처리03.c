#include <stdio.h>

void sum();
int a;
void main(void)
{
	printf("����� ������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	sum();
	printf("\n");
	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	sum();
	printf("\n");
	printf("�ı� ������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	sum();
	printf("\n");
}

void sum()
{
	switch (a / 10)
	{
	case 10: printf("A");
		break;
	case 9: printf("A");
		break;
	case 8: printf("B");
		break;
	case 7: printf("C");
		break;
	default: printf("D");
		break;
	}
}