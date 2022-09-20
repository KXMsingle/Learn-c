#include<stdio.h>

int main(void)
{
	float sdf, wer;
	
	printf("Input the degree:");
	scanf("%f", &wer);
	sdf = (5 * (wer - 32) / 9);
	printf("\n");

	printf("F(%.2f)=C(%.2f)", wer, sdf);



	return 0;
}
