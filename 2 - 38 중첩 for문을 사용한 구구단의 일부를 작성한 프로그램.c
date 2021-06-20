#include <stdio.h>
int main() {
	int i, j;
	for (i = 8; i <= 9; i++) {
		for (j = 5; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}