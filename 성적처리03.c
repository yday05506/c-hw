#include <stdio.h>

void sum();
int a;
void main(void)
{
	printf("씨언어 점수를 입력하시오 : ");
	scanf("%d", &a);
	sum();
	printf("\n");
	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &a);
	sum();
	printf("\n");
	printf("컴구 점수를 입력하시오 : ");
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