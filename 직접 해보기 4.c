#include <stdio.h>

void main(void)
{
	int a, b;
	scanf("%d", &a);
	printf("쉬프트 할 값 입력 : ");
	scanf("%d", &b);

	printf("%d(을)를 왼쪽으로 %d만큼 shift하면 %d 입니다.", a, b, a << b);
}