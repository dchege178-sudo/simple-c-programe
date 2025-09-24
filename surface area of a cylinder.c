/*
Name:Danson Githuku Chege
REG:CT100/G/26196/25
Description:programe to compute surface area of a cylinder
surface area=((2*3.142)*(radius*radius))+((2*3.142)*radius*height)
*/

#include <stdio.h>

int main()
{
	float radius,height;
	double surfacearea;

	
	printf("\nEnter radius");
	scanf("%f",& radius);
	
	printf("\nEnter height");
	scanf("%f",& height);
	
	surfacearea=((2*3.142)*(radius*radius))+((2*3.142)*radius*height);
	
	printf("\n The surface area of a cylinder is %lf\n",surfacearea);
	return 0;
}