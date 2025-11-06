/*
Name:Danson Githuku chege.
REG NO:CT100/G/26196/25.
Description:program to store students examinatin results.
*/

#include <stdio.h>
 int main()
 {
 	
 	
 	
 char choice;
 char name[100];
 char registration_number[20];	
 float results;
 FILE *nfp;
 nfp=fopen("results.dat","ab");
 
  if(nfp==NULL){
	  printf("file has not been created!");
	  return 1;
	   }
	
		printf("Enter students name:\n");
		fgets(name,sizeof(name),stdin);
		fprintf(nfp,"%s\n",name);
	
		
		printf("Enter registration numder:\n");
		fgets(registration_number,sizeof(registration_number),stdin);
		fprintf(nfp,"%s\n",registration_number);
		
		
		printf("Enter examination results:\n");
		scanf("%f",&results);
		fprintf(nfp,"%f\n",results);
	
		
		printf("\nrecords stored successflly\n");	
	
	 
	  printf("Do you want to enter details for another student Y/N\n");
	  scanf("%c",&choice);
	  getchar();//clear a new line
	
	 
	   fclose(nfp);
    printf("All records have been saved successfuly.\n");	
   
	return 0;   
	
 }