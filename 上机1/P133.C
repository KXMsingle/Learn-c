#include<stdio.h>

int main(void)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, kk;

	printf("请输入11个数字:");
	scanf("%d %d %d %d %d %d %d %d %d %d %d", &aa, &bb, &cc, &dd, &ee, &ff, &gg, &hh, &ii, &jj, &kk);
	printf("\n");
	printf("解密结果为:%c%c%c%c%c%c%c%c%c%c%c", aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, kk);

	return 0;
}