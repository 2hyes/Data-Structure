#include <stdio.h>

int med3(int, int, int);
int main(void) {

	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 1, med3(3, 2, 1));  
	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 2, med3(3, 2, 2));  
	printf("med3 (%d %d %d) = %d입니다.\n", 3, 2, 3, med3(3, 2, 3));  
	printf("med3 (%d %d %d) = %d입니다.\n", 2, 1, 3, med3(2, 1, 3));  
	printf("med3 (%d %d %d) = %d입니다.\n", 3, 1, 2, med3(3, 1, 2));  
	printf("med3 (%d %d %d) = %d입니다.\n", 3, 3, 2, med3(3, 3, 2));  
	printf("med3 (%d %d %d) = %d입니다.\n", 3, 3, 3, med3(3, 3, 3));  
	printf("med3 (%d %d %d) = %d입니다.\n", 2, 2, 3, med3(2, 2, 3));  
	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 1, med3(2, 3, 1));  
	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 2, med3(2, 3, 2));  
	printf("med3 (%d %d %d) = %d입니다.\n", 1, 3, 2, med3(1, 3, 2));  
	printf("med3 (%d %d %d) = %d입니다.\n", 2, 3, 3, med3(2, 3, 3));  
	printf("med3 (%d %d %d) = %d입니다.\n", 1, 2, 3, med3(1, 2, 3));

	return 0;
}

int med3 (int a, int b, int c) {
	if ((b >= a && a >= c) || (c >= a && a >= b))
		return a;
	else if ((a >= b && b >= c) || (c >= b && b >= a))
		return b;
	return c;

}