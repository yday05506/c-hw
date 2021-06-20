#include <stdio.h>
int main() {
	int age;
	printf("당신의 나이는?\n");
	scanf_s("%d", &age);
	if (age >= 20)
		printf("A 코스로 출발하세요.\n");
	else if (age >= 15)
		printf("B 코스로 출발하세요.\n");
	else
		printf("C 코스로 출발하세요.\n");
	return 0;
}