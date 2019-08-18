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
	int number; //사람수
	printf("사람수 : ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d명의 키를 입력하세요.\n", number);

	for (i = 0; i < number; i++)
		scanf("%d", &height[i]);
	printf("키의 최솟값은 %d입니다.\n", minof(height, number));
	printf("키의 합은 %d입니다.\n", sumof(height, number));
	printf("키의 평균은 %f입니다.\n", aveof(height, number));
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