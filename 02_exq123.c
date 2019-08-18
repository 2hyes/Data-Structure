#include <stdio.h>
#include <stdlib.h>
/*Q1 : Get the minimum value of the heights */
int minof(const int, int);
/*Q2 : Get the sum of the heights */
int sumof(const int, int);
/*Q3 : Get the average value of the heights */
double aveof(const int, int);

int main(void) {
	int i;
	int* height;
	int number; //�����
	printf("����� : ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d���� Ű�� �Է��ϼ���.\n", number);

	for (i = 0; i < number; i++)
		scanf("%d", &height[i]);
	printf("Ű�� �ּڰ��� %d�Դϴ�.\n", minof(height, number));
	printf("Ű�� ���� %d�Դϴ�.\n", sumof(height, number));
	printf("Ű�� ����� %f�Դϴ�.\n", aveof(height, number));
	free(height);
}

int minof(const int a[], int n) {
	int i; int min = a[0];
	for (i = 0; i < n; i++) {
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
int sumof(const int a[], int n) {
	int i, sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
double aveof(const int a[], int n) {
	int i;
	double sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}