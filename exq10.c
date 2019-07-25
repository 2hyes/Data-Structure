#include <stdio.h>

int main(void) {
	int a, b;
	printf("a의 값 : ");
	scanf("%d", &a);

	while (1) {
		printf("b의 값 : ");
		scanf("%d", &b);
		if (a < b)
			break;
		printf("a보다 큰 값을 입력하세요!\n");
	}
	printf("b - a는 %d입니다.\n", (b - a));
}