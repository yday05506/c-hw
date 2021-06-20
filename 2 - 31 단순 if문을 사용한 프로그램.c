#include <stdio.h>
int main()
{
	int score;
	printf("성적을 입력하시오.\n");
	scanf_s("%d", &score);
	if (score >= 70)
		printf("합격입니다.\n");
	return 0;
}