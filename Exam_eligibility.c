/*
Name:Danson Githuku Chege
REG:CT100/G/26196/25
Description:Program to disply exam eligibility
*/

#include <stdio.h>

int main()
{
	float average_marks,attendance;
	
	printf("Enter attedance");
	scanf("%f",& attendance);
	
	printf("Enter average marks");
	scanf("%f",&average_marks);
	
	if(attendance>=75&&average_marks>=40)printf("Eligible");
	
	else
	
		printf("Not eligible");
	
	return 0;
}

