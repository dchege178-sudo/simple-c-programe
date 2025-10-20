/*
Name:Danson Githuku Chege.
REG:CT100/G/26196/25.
Description:Programe to calculate fare.
*/

#include <stdio.h>
float multiplacation(float distance,int r);
void  main()
{
	float distance,fare;
	int r=50;
	
	printf("Enter distance travelled:\n");
	scanf("%f",&distance);
	
	fare= multiplacation(distance,r);
	printf("your  fare is ksh %.2f ",fare);
	
}

float multiplacation(float distance,int r)
{
	float z;
	z=distance*r;
	return z;
}
  