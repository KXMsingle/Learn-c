#include<stdio.h>

int main(void)
{
	char num;

	printf("Input a character: ");
	scanf("%c", &num);
	printf("\nAscii('%c') = 0x%02x", num, num);


	return 0;
}