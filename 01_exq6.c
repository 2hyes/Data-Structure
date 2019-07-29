#include <stdio.h>

int main(void) {
	int i = 1;
	int n;
	int sum = 0;
	
	puts("1부터 n까지의 합을 구합니다.\n");
	printf("n의 값 : ");
	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i++;
	}
	printf("최종 i의 값 = %d\n", i);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}
