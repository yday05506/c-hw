#include <stdio.h>

void main(void)
{
	int a, b;
	scanf("%d", &a);
	printf("����Ʈ �� �� �Է� : ");
	scanf("%d", &b);

	printf("%d(��)�� �������� %d��ŭ shift�ϸ� %d �Դϴ�.", a, b, a << b);
}