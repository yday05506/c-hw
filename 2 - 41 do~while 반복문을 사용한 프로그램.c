#include <stdio.h>
int main()
{
	int n = 10;
	do
	{
		if (n % 5 == 0)
		{
			printf("%3d\n", n);
		}
		n++;
	} 
	while (n < 20);
	return 0;
}