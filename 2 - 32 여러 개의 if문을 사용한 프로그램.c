#include <stdio.h>
int main()
{
	int color;
	printf("������ ������? (1:����� 2:�Ķ��� 3:������)\n");
	scanf_s("%d", &color);
	if (color == 1)
		printf("�����-A��\n");
	if (color == 2)
		printf("�Ķ���-B��\n");
	if (color == 3)
		printf("������-C��\n");
	return 0;
}