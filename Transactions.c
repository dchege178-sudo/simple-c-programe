/*
Name:Danson Githuku chege.
REG NO:CT100/G/26196/25.
Description:program to store shop daily sales.
*/

#include <stdio.h>
#include <stdlib.h>



int main(){
    FILE *salesptr;//creation of pointer variable
     int num;
     int sum =0;
    salesptr=fopen("sales.txt","r");//reads the data in the  sales.txt files
   while (fscanf(salesptr, "%d", &num) == 1) {//ensures all the integers are read
    sum+=num;//Calculates the sum
    printf("%d\n", num);
}
printf("The total sales for today are %d",sum);//prints out the sum
fclose(salesptr);
return 0;
}