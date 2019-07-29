#include <stdio.h>

void sumof(int, int);

int main(void) {
	int start, end;
	printf("a와 b의 값: ");
	scanf("%d %d", &start, &end);

	sumof(start, end);
	return 0;
}
void sumof(int a, int b) {
	int i;
	int sum = 0;
	if (a > b) {
		for (i = a; i >= b ; i--)
			sum += i;
	}
	else {
		for (i = a; i <= b; i++)
			sum += i;
	}
	
	printf("%d에서 %d까지의 합은 %d.\n", a, b, sum);
}
