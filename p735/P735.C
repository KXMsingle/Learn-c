#include<stdio.h>
#include<math.h>

int main(void)
{
	int side, perimeter;
	double pp, area;

	printf("Input a side of triangle: ");
	scanf("%d", &side);
	perimeter = side * 3;
	pp = ((double)(side + side + side) / 2);
	area = sqrt(pp  * (pp - side) * (pp - side) * (pp - side)); 
	printf("\nThe area of triangle is %.2lf, the circle of triangle is %d.", area, perimeter);

	return 0;
}