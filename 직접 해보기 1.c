#include <stdio.h>

void main(void)
{
	int a;
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &a);

	if (a > 10 && a < 20)
		printf("���� %d(��)�� 10���� ũ�� 20���� �۽��ϴ�.", a);
	else
		printf("���� %d(��)�� ���ǿ� �������� �ʽ��ϴ�.", a);
}