#include<stdio.h>

int main(void)
{
	int bian, volume, surface;

	printf("Input a side of cube: ");
	scanf("%d", &bian);
	volume = bian * bian * bian;
	surface = bian * bian * 6;
	printf("\nThe volume of cube is %d, the surface area of cube is %d.\n", volume, surface);

	return 0;
}