#include<stdio.h>

int main(void)
{
	int number;

	printf("Please input an integer:");
	scanf("%d", &number);
	printf("\n");
	if (number % 5 == 0 && number % 7 == 0)
	{
		printf("Yes.");
	}
	else 
	{
		printf("No.");
	}


	return 0;
}