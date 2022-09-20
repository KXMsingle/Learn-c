#include<stdio.h>

int main(void)
{
	int number, result;

	printf("Input an integer:");
	scanf("%d", &number);
	printf("\n");
	printf("The result is ");
	do
	{
		result = number % 10;
		printf("%d", result);
		number = number / 10;
	} while (number > 0);
	printf("\n");
	return 0;
}