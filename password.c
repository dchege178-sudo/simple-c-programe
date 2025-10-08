/*
Name:Danson Githuku Chege.
REG:CT100/G/29196/25.
Description:programe to input password.
*/

#include <stdio.h>

int main()
{
	int userpassword;
	int password=1234;
	
	do{
	printf("Enter your password :");
	scanf("%d",&userpassword);}
	
	while(userpassword!=password);
	printf("Acess granted!");
	
	return 0;
}