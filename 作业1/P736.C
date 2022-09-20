#include<stdio.h>

int main(void)
{
	int aa, ge, shi, bai, qian, sum;

	printf("Input a number with 4-digit:");
	scanf("%d", &aa);
	ge = aa % 10;
	shi = aa / 10 % 10;
	bai = aa / 10 / 10 % 10;
	qian = aa / 10 / 10 / 10 % 10;
	sum = ge + shi + bai + qian;
	printf("\n");
	printf("sum=%d", sum);


	return 0;
}