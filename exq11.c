#include <stdio.h>
//���� ������ �Է��ϰ� �ڸ����� ����ϴ� ���α׷�
int main(void) {
	int num;
	int num_of_digit = 0;
	printf("���� ������ �Է��Ͻÿ�.\n");
	scanf("%d", &num);
	
	do {
		num /= 10;
		num_of_digit += 1;
	} while (num > 0);
	printf("�� ���� %d�ڸ��Դϴ�.\n", num_of_digit);
	return 0;
}