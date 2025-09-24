/*
Name:Danson Githuku Chege
REG:CT100/G/26196/25
Description:programe to compute volume of a cylinder
Volume=pi*radius*height
*/

#include <stdio.h>

int main()
{
	float height,radius,volume;

	
	printf("\n Enter radius");
	scanf("%f",&radius);
	
	printf("\nEnter height");
	scanf("%f",&height);
	
	volume=3.142*(radius*radius)*height;
	
	printf("\nThe volume is %f",volume);
		return 0;
}