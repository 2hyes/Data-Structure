#include <stdio.h>

int main(void) {
	int a, b;
	printf("a�� �� : ");
	scanf("%d", &a);

	while (1) {
		printf("b�� �� : ");
		scanf("%d", &b);
		if (a < b)
			break;
		printf("a���� ū ���� �Է��ϼ���!\n");
	}
	printf("b - a�� %d�Դϴ�.\n", (b - a));
}