#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//반환형과 매개변수가 있다면 각각의 의미를 서술하시오
int order(int money, int num, int sunnyten, int sweat, int change);

void main(void)
{
	//금액
	int money = 3000;
	//음료
	int coke = 700, sunnyten = 600, sweat = 800;
	int num;
	int change;

	while (1)
	{
		change = order(&money, &num, &coke, &sunnyten, &sweat, &change);
		printf("%d", change);
		printf("\n");

		if (change <= 0)
			break;
	}
}

int order(int money, int num, int coke, int sunnyten, int sweat, int change)
{
	int temp;
	printf("현재금액 %d\n", money);
	printf("1. 코카콜라:700원\n");
	printf("2. 써니텐:600원\n");
	printf("3. 포카리스웨트:800원\n");
	printf("구매할 물건의 버튼을 입력하시오 ");
	scanf_s("%d", &num);
	
	temp = num;
	if (temp == 1)
		change = money - coke;
	else if (temp == 2)
		change = money - sunnyten;
	else if (temp == 3)
		change = money - sweat;
	else {
		printf("다시 입력하세요 : ");
		scanf_s("%d\n", &num);
	}
	
	return change;
}