#include <stdio.h>

int main(void) {
	int i = 1;
	int n;
	int sum = 0;
	
	puts("1���� n������ ���� ���մϴ�.\n");
	printf("n�� �� : ");
	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i++;
	}
	printf("���� i�� �� = %d\n", i);
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;
}