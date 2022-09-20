#include<stdio.h>

int main(void)
{
	float xx, yy, Result;
	int zz;

	printf("please input x,y,z:");
	scanf("%f,%f,%f", &xx, &yy, &zz);
	printf("\n");
	Result = xx + zz % 3 * (int)(xx + yy) % 2 / 4;
	printf("Result = %f", Result);
	

	return 0;
}