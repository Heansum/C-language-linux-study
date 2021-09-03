#include <stdio.h>

int main(void)
{
	int num;
	int result;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	result=num*num;
	printf("%d \n", result);
	return 0;
}
