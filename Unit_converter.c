// #define _CRT_SECURE_NO_WARNINGS | Visual Studio 경우에만 사용 scnaf 오류 방지
#include<stdio.h> // 헤더 추가

double cm; // 실수형 변수 cm 선언

int main() {
	printf("cm : ");
	scanf("%lf", &cm);
	printf("%g cm = %g inch\n", cm, cm / 2.54); // 공식 적용
}
