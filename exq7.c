#include <stdio.h>

int main(void) {
	int i = 1;
	int sum = 0;
	int n;

	printf("n�� �� : ");
	scanf("%d", &n);

	for (i; i <= n; i++) {
		printf("%d + ", i);
		sum += i;
	}
	printf(" = %d\n", sum);

	return 0;
}