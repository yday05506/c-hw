#include <stdio.h>
int main()
{
	int i = 1;
	while (i > 0)
	{
		printf("양수의 정수를 입력하시오. \n");
		scanf_s("%d", &i);
	}
	printf("잘못 입력했습니다. \n");
	return 0;
}