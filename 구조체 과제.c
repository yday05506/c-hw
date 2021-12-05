/*
	타율적과제 03
	매개변수 coca, sunny, pocari를 대신하는
	구조체 타입 struct drink를 정의하여 적용하기
*/

//struct drink {
//	// 멤버변수 채우기
//};


#include <stdio.h>

void order(int* money, int button, struct drink cost);

struct drink {
	int coca;
	int sunny;
	int pocari;
};

void main(void)
{
	int money = 3000;
	struct drink d1= { 700, 600, 800 };
	int num;

	while (1)
	{
		printf("현재금액 %d\n", money);
		printf("1. 코카콜라:700원\n");
		printf("2. 써니텐:600원\n");
		printf("3. 포카리스웨트:800원\n");
		printf("구매할 물건의 버튼을 입력하시오 ");
		scanf_s("%d", &num);
		// 자판기에서 물건을 주문을 하는 함수 order를 호출한다.
		// 코카콜라, 써니텐, 포카리스웨트 중 하나의 버튼을 누르면 order함수가 이를 처리한다.
		order(&money, num, d1);

		printf("\n");
	}
}

void order(int* money, int button, struct drink cost) // 힌트
{
	switch (button)
	{
	case 1:	//코카콜라 버튼을 눌렀을 경우
		*money -= cost.coca;
		break;

	case 2: //써니텐 버튼을 눌렀을 경우
		*money -= cost.sunny;
		break;

	case 3: //포카리스웨트 버튼을 눌렀을 경우
		*money -= cost.pocari;
		break;
	}
}