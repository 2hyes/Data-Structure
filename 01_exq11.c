#include <stdio.h>
//양의 정수를 입력하고 자릿수를 출력하는 프로그램
int main(void) {
	int num;
	int num_of_digit = 0;
	printf("양의 정수를 입력하시오.\n");
	scanf("%d", &num);
	
	do {
		num /= 10;
		num_of_digit += 1;
	} while (num > 0);
	printf("그 수는 %d자리입니다.\n", num_of_digit);
	return 0;
}
