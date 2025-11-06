/*
Name:Danson Githuku Chege.
REG NO:CT100/G/26196/25.
Description:Program for library books recording.
*/

#include <stdio.h>

int main()
{

	char book[100];
	FILE *lby;
	lby = fopen("Borrowed_books.txt","a+");
	if(lby==NULL){
		printf("Error in opening file!\n");
		return 1;
		
	}
	
	
	printf("Enter the title of the book\n");
	fgets(book,sizeof(book),stdin);
	fprintf(lby, "%s\n",book);
	

	
	fclose(lby);
	printf("results have been written to Borrowed_books.txt");
	return 0;
}