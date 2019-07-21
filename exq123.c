#include <stdio.h>

/*
// Q1
int max4(int, int, int, int);

int main(void) {
	int a, b, c, d;
	printf("네 정수  입력하시오.");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("max = %d", max4(a, b, c, d));

}

int max4(int a, int b, int c, int d) {
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	
}
*/

/*
// Q2
int min3(int, int, int);
int main(void) {
	int a, b, c;
	printf("세 정수를 입력하시오\n");
	scanf("%d %d %d", &a, &b, &c);

	printf("min = %d\n", min3(a, b, c));

	return 0;
}
int min3(int a, int b, int c) {
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}
*/

//	Q3
int min4(int, int, int, int);
int main(void) {
	int a, b, c, d;
	printf("네 정수를 입력하시오\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("min = %d\n", min4(a, b, c, d));

	return 0;
}
int min4(int a, int b, int c, int d) {
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	
	return min;
}
