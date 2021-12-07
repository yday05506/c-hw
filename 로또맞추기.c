#include <stdio.h>

int confirm_1st(int* answer, int* my);

void main(void)
{
	// 로또번호(오름차순 정렬)
	int answer_number[6] = { 2, 4, 8, 11, 15, 41 };
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
	// *(answer+i)와 answer[i]와 같다
	// HACK : answer와 my는 다른 공간에 할당되어 있음
	// if (answer == my)
	for (int i = 0; i < 6; i++) {
		if (answer[i] != my[i])
			return 0;
		else
			return 1;
	}
	//int cnt = 0;
	//for(int i = 0; i < 6; i++ {
	//	if(answer[i] == my[i])
	//		cnt++;
	//	else
	//		return 0;
	//}
	//if(cnt == 6)
	//	return 1;
}

