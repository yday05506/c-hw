#include <stdio.h>
int main() {
	int math, eng;
	printf("math? eng? : ");
	scanf_s("%d%d", &math, &eng);
	if (math >= 60)
		if (eng >= 60)
			printf("Pass \n");
		else
			printf("Fail \n");
	else
		printf("Fail \n");
	return 0;
}