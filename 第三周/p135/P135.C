#include<stdio.h>

#include<math.h>


int main(void)
{
	double xx, yy;

	printf("?????뻡?? x: ");
	scanf("%lf", &xx);
	yy = sin(xx);
	printf("\nSin(%.2lf) = %.5lf\n", xx, yy);


	return 0;
}