/*
Name:Danson Githuku Chege.
REG NO:CT100/G/26196/25.
Description:Programe to display use of 1D Array.
*/

#include <stdio.h>

int main()
{
	int i;
	int sum=0;
	int revenue=0;
    int average;
    char *days[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	for(i=0;i<7;i++){
		  printf("Enter daily revenue for %s :",days[i]);
		  scanf("%d",&revenue);
		sum=sum + revenue;
		}
	printf("The total weekly revenue is:%d\n",sum);
	
	average=sum/7;
	printf("The average daily revenue is:%d",average);
	
	return 0;
}