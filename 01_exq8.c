#include <stdio.h>
int gauss(int);

int main(void) {
	int n, sum;
	printf("n의 값 : ");
	scanf("%d", &n);

	sum = gauss(n);
	printf("1부터 n까지의 정수합은 %d.\n", n, sum);
}

int gauss(int n) {
	int half = 0;
	int sum = 0;
	//even
	if (n % 2 == 0) {
		half = n / 2;
		sum = (1 + n) * half;
	}
	//odd
	else {
		half = n / 2 + 1;
		sum = ((1 + n) * (half - 1)) + half;
	}
	return sum;
}
