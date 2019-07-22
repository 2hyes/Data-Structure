<<<<<<< HEAD
#include <stdio.h>

int med3(int, int, int);

int main(void) {

	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 1, med3(3, 2, 1));  /* [A] a > b > c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 2, med3(3, 2, 2));  /* [B] a > b = c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 3, med3(3, 2, 3));  /* [D] a = c > b */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 1, 3, med3(2, 1, 3));  /* [E] c > a > b */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 1, 2, med3(3, 1, 2));  /* [C] a > c > b */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 3, 2, med3(3, 3, 2));  /* [F] a = b > c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 3, 3, med3(3, 3, 3));  /* [G] a = b = c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 2, 3, med3(2, 2, 3));  /* [H] c > a = b */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 1, med3(2, 3, 1));  /* [I] b > a > c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 2, med3(2, 3, 2));  /* [J] b > a = c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 1, 3, 2, med3(1, 3, 2));  /* [K] b > c > a */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 3, med3(2, 3, 3));  /* [L] b = c > a */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 1, 2, 3, med3(1, 2, 3));  /* [M] c > b > a */
	
	return 0;
}
int med3(int a, int b, int c) {
	if (a >= b) {
		if (b >= c)
			return b;
		else if (a >= c)
			return c;
		else
			return a;
	}
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}
=======
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
int med3(int a, int b, int c) {
	if (a >= b) {
		if (b >= c)
			return b;
		else if (a >= c)
			return c;
		else
			return a;
	}
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}
>>>>>>> 96308b3c29a378a7b8006f88cbe5b0d8aedba427
