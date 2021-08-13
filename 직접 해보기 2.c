#include <stdio.h>

void main(void)
{
	int a;
	printf("숫자 하나를 입력하세요 : ");
	scanf("%d", &a);

	if (a == 10)
		printf("숫자 %d(은)는 10입니다.", a);
	else if (a > 10)
		printf("숫자 %d(은)는 10보다 큽니다.", a);
	else
		printf("숫자 %d(은)는 10보다 작습니다.", a);
}