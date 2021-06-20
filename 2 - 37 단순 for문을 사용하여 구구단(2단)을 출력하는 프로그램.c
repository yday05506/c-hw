#include <stdio.h>
int main()
{
	int i, j;
	i = 2;
	for (j = 1; j <= 9; j++)
	{
		printf("%d x %d = %d\n", i, j, i * j);
	}
	return 0;
}