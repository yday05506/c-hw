#include <stdio.h>

void main(void)
{
	int a;
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &a);

	if (a == 10)
		printf("���� %d(��)�� 10�Դϴ�.", a);
	else if (a > 10)
		printf("���� %d(��)�� 10���� Ů�ϴ�.", a);
	else
		printf("���� %d(��)�� 10���� �۽��ϴ�.", a);
}