#include<stdio.h>

int main(void)
{
	//定义变量盒子
	float r1;
	float s1;
	float c1;
	printf("input r：");
	//从键盘读半径到内存半径变量盒子
	scanf("%f",&r1);
	//内存计算面积和周长装入对应变量
	s1=3.14f*r1*r1;
	c1=3.14f*2*r1;
	//将面积和周长变量数据写入屏幕
	printf("s1=%.2f,c1=%.2f\n",s1,c1);

	return 0;

}