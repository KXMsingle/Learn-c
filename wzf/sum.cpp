#include<stdio.h>

int main(void)
{
	int num, ge, shi, bai, sum;

	printf("\n请输入一个三位数:");
	scanf("%d", &num);
	ge = num % 10;
	shi = num / 10 % 10;
	bai = num / 10 /10 %10;
	sum = ge + shi + bai;
	printf("\n相加结果为:%d", sum);

	return 0;
}