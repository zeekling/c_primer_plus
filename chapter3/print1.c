#include <stdio.h>

int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it right:");
	printf("%d minus %d is %d \n", ten, 2, ten - two);
	printf("Doing it wrong:");
	// 遗漏两个参数
	printf("%d mimus %d is %d\n", ten);
	return 0;
}


