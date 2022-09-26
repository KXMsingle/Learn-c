#include<stdio.h>

int main(void)
{
	char aa, bb;
	double cc, dd, ee;
	int ff;
	printf("请输入6个数据(依次为2字符、3实数、1整数): ");
	scanf("%c %c %lf %lf %lf %d", &aa, &bb, &cc, &dd, &ee, &ff);
	printf("\n这6个数据倒序为: 6-%d 5-%.5lf 4-%.5lf 3-%.5lf 2-%c 1-%c", ff, ee, dd, cc, bb, aa);


	return 0;
}