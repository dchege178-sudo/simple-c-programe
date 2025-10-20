/*
Name:Danson Githuku Chege.
REG:CT100/G/26196/25.
Description:programe to calculate electric bill.
*/

#include <stdio.h>

int main()
{
	float units;
	float bill;
	
	
	printf("Enter units:\n");
	scanf("%f",&units);
	
	if(units<=100)
		bill=units*10;
	else if(units<=200)
		bill=units*15;
	else
	{
		bill=units*20;
	}
	
	printf("your electric bill is %.2f",bill);
	return 0;
}