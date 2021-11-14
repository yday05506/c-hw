#include <stdio.h>
int confirm_1st(int answer, int my);

void main(void)
{
	// 로또번호(오름차순 정렬)
	int answer_number[6] = { 2, 3, 8, 11, 15, 41 };
	// 자신이 기입한 번호(오름차순 정렬)
	int my_number[6] = { 2, 3, 8, 11, 15, 41 };

	if (confirm_1st) {
		printf("1등에 당첨되었습니다. \n");
	}
}

int confirm_1st(int answer, int my)
{
	if (answer == my)
		return;
}