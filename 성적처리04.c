#include<stdio.h>

float average(float c, float java, float cs);
char mark(float score);

int main(void) {
	float c, java, cs;
	printf("����� ������ �Է��Ͻÿ� : ");
	scanf("%f", &c);
	printf("%c\n", mark(c));
	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%f", &java);
	printf("%c\n", mark(java));
	printf("�ı� ������ �Է��Ͻÿ� : ");
	scanf("%f", &cs);
	printf("%c\n", mark(cs));
	printf("�� ������ ����� %f �Դϴ�.", average(c, java, cs));
	return 0;
}
float average(float c, float java, float cs) {
	return (c + java + cs) / 3;
}
char mark(float score) {
	char ans = 'A';
	if (score >= 80 && score < 90)ans++;
	else if (score >= 70 && score < 80)ans += 2;
	else if (score < 70)ans += 3;
	return ans;
}