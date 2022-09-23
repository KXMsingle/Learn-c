#include<stdio.h>

int main(void)
{
	int xx, yy;

	printf("please input x, y: ");
	scanf("%d,%d", &xx, &yy);
	if (xx > yy)
	{
		printf("%d is bigger", xx);
	}
	else
	{
		printf("%d is bigger", yy);
	}

	return 0;
}