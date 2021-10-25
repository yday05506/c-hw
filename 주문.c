#include <stdio.h>

//반환형과 매개변수가 있다면 각각의 의미를 서술하시오
int order(int);
int order(int deposit);
int deposit = 3000;
int coca = 700, sunny = 600, blue = 800, num;

void main(void) {

    while (deposit > 0)
    {
        

        printf("현재금액 %d\n", deposit);
        printf("1. 코카콜라:700원\n");
        printf("2. 써니텐:600원\n");
        printf("3. 포카리스웨트:800원\n");
        printf("구매할 물건의 버튼을 입력하시오 ");
        scanf_s("%d", &num);

        deposit = order(deposit);
    }
}

int order(int deposit)
{
    switch (num) {
    case 1:
        deposit -= coca;
        break;
    case 2:
        deposit -= sunny;
        break;
    case 3:
        deposit -= blue;
        break;
    }
    printf("\n");
    return deposit;
}