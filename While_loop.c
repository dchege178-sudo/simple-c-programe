/*
Name:Danson Githuku Chege.
REG:CT100/G/26196/25.
Description:programe to illustrate while loop.
*/

#include <stdio.h>

int main()
{
	int balance;
	int amount;
	
	printf("Enter your balance");
	scanf("%d",&balance);
	
	while(balance>0)
	{	 
	printf("Enter amount to be withdrawn \n");
	scanf("%d",&amount);
	
	balance-=amount;
	printf("your new balance is %d\n",balance);
	}
	printf("insufficient balance");
	
	return 0;
}