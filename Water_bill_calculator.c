/*
Name:Danson Githuku Chege
REG:CT100/G/26196/25
Description:program to calculate water bill
*/

#include <stdio.h>

int main()
{
	int units;
	float bill;
	
	printf("Enter units");
	scanf("%d",& units);
	
	if(units >=0&& units<=30)bill=units*20;
	
	else if(units>=31&&units<=60)bill=units*25;
	
	else if(units>60)bill=units*30;	
		
	printf("Total water bill %.2f KES\n", bill);
	return 0;
}