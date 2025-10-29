/*
Name:Danson Githuku Chege.
REG:CT100/G/26196/25.
Description:Programe to display use of 3D Array.
*/


#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main()

{
    srand(time(0));
	int occupied=0;
	int i,j,k;
	int occupancy[3][5][10]={0};
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			for(k=0;k<10;k++){
						occupancy[i][j][k]= rand() % 2;
		printf("%d\t",occupancy[i][j][k]);
    	if(occupancy[i][j][k]==1)occupied++;
		
			}
		
		}
		printf("\n");
		}
		printf("\nTotal occupied rooms:%d\n",occupied);
	
	
			
			
	return 0;
}
	