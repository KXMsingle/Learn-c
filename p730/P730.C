#include<stdio.h>

int main(void)
{
	int xx, yy;

	printf("please input x y: ");
	scanf("%d %d", &xx, &yy);
	if (xx == yy)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");	
	}

	return 0;
}