#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result;
	printf("세 정수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1*num2+num3;
	printf("%dX%d+%d=%d \n", num1, num2, num3, result);
	return 0;
}
