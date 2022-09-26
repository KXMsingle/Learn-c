#include<stdio.h>

#define pp 3.14f

int main(void)
{
	float rr, hh, cc, ss, vv;

	printf("Input: ");
	scanf("r=%f, h=%f", &rr, &hh);
	cc = 2 * pp * rr;
	ss = pp * rr * rr;
	vv = pp * rr * rr * hh;
	printf("\nC1 = %.2f\n S = %.2f\n V = %.2f", cc, ss, vv);



	return 0;
}