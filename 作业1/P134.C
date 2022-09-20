#include<stdio.h>

int main(void)
{
	char aa, bb, cc, dd, ee, ff, gg, hh, ii, jj;

	printf("请输入10个字符:");
	scanf("%c%c%c%c%c%c%c%c%c%c", &aa, &bb, &cc, &dd, &ee, &ff, &gg, &hh, &ii, &jj);
	printf("\n");
	printf("加密结果为: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d ", aa, bb, cc, dd, ee, ff, gg, hh, ii, jj);
	printf("\n");

	return 0;
}