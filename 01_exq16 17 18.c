#include <stdio.h>
/*
//// Q16 ////
void triangleLB(int);
void triangleLU(int);
void triangleRB(int);
void triangleRU(int);

int main(void) {
	int n;

	scanf("%d", &n);
	triangleLB(n);
	printf("\n");
	triangleLU(n);
	printf("\n");
	triangleRB(n);
	printf("\n");
	triangleRU(n);
}

void triangleLB (int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}

void triangleLU(int n) {
	int i, j;
	for (i = n; i >= 1; i--) {
		for (j = i; j >= 1 ; j--)
			printf("*");
		printf("\n");
	}
}
void triangleRB(int n) {
	int i, j;
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
void triangleRU(int n) {
	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i-1; j++)
			printf(" ");
		for (j = 1; j <= n - i + 1; j++)
			printf("*");
		printf("\n");
	}
}
*/

/*
//// Q17 ////

void spira(int);

int main(void) {
	int n;
	scanf("%d", &n);
	spira(n);
}

void spira(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= (i - 1) * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
}*/

/**/

//// Q18 ////

void nrpira(int);

int main(void) {
	int n;
	scanf("%d", &n);
	nrpira(n);
}

void nrpira(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i-1; j++)
			printf(" ");
		for (j = 1; j <= (n - i) * 2 + 1; j++)
			printf("%d", i%10);
		printf("\n");
	}
}