#include <stdio.h>

void main(void)
{
	int a;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

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
	}
}