#include <stdio.h>
/*
//// Q12 ////
int main(void) {
	int i, row, col;
	printf("   |");
	for (i = 1; i < 10; i++) {
		printf("%3d", i);
	}
	printf("\n---+---------------------------\n");
	for (row = 1; row < 10; row++) {
		printf("%2d |", row);
		for (col = 1; col < 10; col++) {
			printf("%3d", row * col);
		}
		printf("\n");
	}
	return 0;
}*/

/* 
//// Q13 ////
int main(void) {
	int i, row, col;
	printf("   |");
	for (i = 1; i < 10; i++) {
		printf("%3d", i);
	}
	printf("\n---+---------------------------\n");
	for (row = 1; row < 10; row++) {
		printf("%2d |", row);
		for (col = 1; col < 10; col++) {
			printf("%3d", row + col);
		}
		printf("\n");
	}
	return 0;
}*/

/*
//// Q14 ////
int main(void) {
	int n, i, j;
	printf("사각형을 출력합니다.\n");
	do {
		printf("입력할 수 : ");
		scanf("%d", &n);
	} while (n <= 0);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}*/

/**/
//// Q15 ////
int main(void) {
	int height, width, i, j;
	printf("직사각형을 출력합니다.\n");
	do {
		printf("높이 : ");
		scanf("%d", &height);
		printf("너비 : ");
		scanf("%d", &width);
	} while (height <= 0 || width <= 0);

	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
