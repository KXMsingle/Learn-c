#include<stdio.h>

int main(void)
{
	int a,b,c,d,e,f,g,h,i,j,k;
	printf("请输入11个数字:");
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
	printf("解密结果为:");
	printf("%c,%c,%c,%c,%c,%c,%c,%c,%c,%c,%c",a,b,c,d,e,f,g,h,i,j,k);
	return 0;
}
