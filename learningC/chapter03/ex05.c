#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result;
	printf("세 정수를 입력해주세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("%dX%dX%d=%d \n", num1-num2, num2+num3, num3%num1, result);
	return 0;
}
