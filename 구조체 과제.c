/*
	Ÿ�������� 03
	�Ű����� coca, sunny, pocari�� ����ϴ�
	����ü Ÿ�� struct drink�� �����Ͽ� �����ϱ�
*/

//struct drink {
//	// ������� ä���
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
		printf("����ݾ� %d\n", money);
		printf("1. ��ī�ݶ�:700��\n");
		printf("2. �����:600��\n");
		printf("3. ��ī������Ʈ:800��\n");
		printf("������ ������ ��ư�� �Է��Ͻÿ� ");
		scanf_s("%d", &num);
		// ���Ǳ⿡�� ������ �ֹ��� �ϴ� �Լ� order�� ȣ���Ѵ�.
		// ��ī�ݶ�, �����, ��ī������Ʈ �� �ϳ��� ��ư�� ������ order�Լ��� �̸� ó���Ѵ�.
		order(&money, num, d1);

		printf("\n");
	}
}

void order(int* money, int button, struct drink cost) // ��Ʈ
{
	switch (button)
	{
	case 1:	//��ī�ݶ� ��ư�� ������ ���
		*money -= cost.coca;
		break;

	case 2: //����� ��ư�� ������ ���
		*money -= cost.sunny;
		break;

	case 3: //��ī������Ʈ ��ư�� ������ ���
		*money -= cost.pocari;
		break;
	}
}