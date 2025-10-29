/*
Name:Danson Githuku Chege.
REG NO:CT100/G/26196/25.
Description:Programe to display use of 2D Array.
*/

#include <stdio.h>

int main()
{
	int i,j;
	int occupied,empty;
	int occupancy[5][10]={
		
		{1,1,0,1,0,1,0,1,0,0},
		{0,1,0,1,1,0,0,1,0,1},
		{1,1,1,0,1,0,0,0,0,1},
		{0,0,0,1,0,1,0,1,1,1},
		{1,1,1,1,1,1,0,0,1,0}
			
	};
	for(i=0;i<5;i++){int occupied=0;int empty=0;
	printf("\nFloor:%d\n",i+1);
		for(j=0;j<10;j++){
        if(occupancy[i][j]==1)occupied++;
		else empty++;
		
		
		printf("%d\t",occupancy[i][j]);
		}
	printf("\n");
	
	
	
	printf("\nTotal occupied rooms:%d\n",occupied);
	printf("Total empty rooms:%d\n",empty);
	}
	
	return 0;
}