/*
Name:Danson Githuku Chege
REG:CT100/G/26196/25
Description:simple programe for loan requirements
*/

#include <stdio.h>

int main()
{
	
	int age;
	float income;
	
	
	
	printf("Enter age");
	scanf("%d",&age);
	
	printf("Enter income");
	scanf("%f",&income);
	
	if(age>=21&&income>=21000)printf("Congratulations you qualify for a loan");
	
	if(age<21&&income<21000)printf("Unfortunately,we are unable to offer you a loan at this time");
	
	if(age>=21&&income<21000)printf("Unfortunately,we are unable to offer you a loan at this time");
	
	if(age<21&&income>=21000)printf("Unfortunately,we are unable to offer you a loan at this time");
	return 0;
}