#include <stdio.h>
int main() {
	int a = 0;
	int sum = 0;
	for (a > 1; a <= 5; a++)
		sum += a;
	printf("%5d\n", sum);
	return 0;
}