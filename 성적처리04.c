#include<stdio.h>

float average(float c, float java, float cs);
char mark(float score);

int main(void) {
	float c, java, cs;
	printf("씨언어 점수를 입력하시오 : ");
	scanf("%f", &c);
	printf("%c\n", mark(c));
	printf("자바 점수를 입력하시오 : ");
	scanf("%f", &java);
	printf("%c\n", mark(java));
	printf("컴구 점수를 입력하시오 : ");
	scanf("%f", &cs);
	printf("%c\n", mark(cs));
	printf("세 과목의 평균은 %f 입니다.", average(c, java, cs));
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