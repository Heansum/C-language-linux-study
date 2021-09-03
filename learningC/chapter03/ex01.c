#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result1, result2;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	result1 = num1-num2;
	result2 = num1*num2;
	printf("두 수의 뺄샘 결과: %d \n", result1);
	printf("두 수의 곱샘 결과: %d \n", result2);
	return 0;
}
