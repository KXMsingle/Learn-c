#include<stdio.h>

int main(void)
{
	int num, ge, shi, bai, sum;

	printf("\n������һ����λ��:");
	scanf("%d", &num);
	ge = num % 10;
	shi = num / 10 % 10;
	bai = num / 10 /10 %10;
	sum = ge + shi + bai;
	printf("\n��ӽ��Ϊ:%d", sum);

	return 0;
}