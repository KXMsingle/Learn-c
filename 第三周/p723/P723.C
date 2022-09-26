#include<stdio.h>

#include<math.h>

int main(void)

{
	int aa, bb, cc;
	double pp, area;

	printf("please input triange sides: ");
	scanf("%d, %d, %d", &aa, &bb, &cc);
	pp = (double)(aa + bb + cc) / 2;
	area = sqrt(pp * (pp - aa) * (pp - bb) * (pp - cc));
	if (aa + bb > cc && aa + cc > bb && cc + bb > aa)
	{
		printf("\narea=%.2lf\n", area);
	}
	else
	{
		printf("\ndata error\n");
	}

	return 0;
}