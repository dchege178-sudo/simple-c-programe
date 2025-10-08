/*
Name:Danson Githuku Chege.
REG:CT100/G/26196/25.
Description:Program for number guessing game.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	
	int RandomNumber=(rand()%(20-1+1)+1);
	int Usernumber;
	int count=0;
	srand(time(0));
	while(Usernumber!=RandomNumber)
	{
	printf("Guess a number between 1 to 20:");
	scanf("%d", &Usernumber);
	 
	 if(Usernumber==RandomNumber)printf("Congratulations\n");
	 
	 else if(Usernumber<RandomNumber)printf("Too Low\n");
	 
	 else if (Usernumber>RandomNumber)printf("Too high\n");
	}
	 count=count+1;
	 
	 printf("\nyou took %d trial to guess the number correct\n",count);
	return 0;
}