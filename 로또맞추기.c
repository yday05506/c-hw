#include <stdio.h>
int confirm_1st(int* answer, int* my);

void main(void)
{
	// 로또번호(오름차순 정렬)
	int answer_number[6] = { 2, 3, 8, 11, 15, 41 };
	// 자신이 기입한 번호(오름차순 정렬)
	int my_number[6] = { 2, 3, 8, 11, 15, 41 };

	// HACK : 함수에 argument가 없었음
	//if (confirm_1st) {
	//	printf("1등에 당첨되었습니다. \n");
	//}

	if (confirm_1st(answer_number, my_number)) {
		printf("1등에 당첨되었습니다. \n");
	}
}

// HACK : 매개변수를 주소값으로 해야함
// int confirm_1st(int answer, int my)
int confirm_1st(int* answer, int* my)
{
	// HACK : answer와 my는 다른 공간에 할당되어 있음
	// if (answer == my)
	if (*answer == *my)
		// HACK : 반환값이 존재하지 않음
		// return;
		return 1;
	else
		return 0;
}

