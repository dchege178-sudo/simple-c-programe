/*
Name:Danson Githuku Chege.
REG:CT100/G/26196/25.
Description:programe to convert temperature from fahrenhait to degrees celcius.
*/

#include <stdio.h>


float multiplication(float f,float k);
void  main()
{
	float temperature,fahrenhait;
	float k=0.555555555;
	
	
	printf("Enter tempareture in fahrenhait:\n");
	scanf("%f",&fahrenhait);
	
	temperature=multiplication(fahrenhait,k);
	
	printf("The temperatre is %.2f degrees celcius",temperature);
}
	
float multiplication(float f,float k)
{
	float z;
	
	z=(f-32)*k;
	return z;
}