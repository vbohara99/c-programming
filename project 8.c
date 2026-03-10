//8.	Write a program to convert length from mm to km, m, cm and mm.
#include<stdio.h>
int main()
{
    int km,m,cm,mm;
    printf("Output of CSIT assignment QN.8 by Bikram Bohara\n");

   //input
   printf("enter total mm=");//shows in display
   scanf("%d",&mm);//address total to d that we input 
   
   printf("%d km %d m %d cm %d mm",
    mm/1000000,
    mm/100/10%1000,
    mm/10%100,
    mm%10);
    
    return 0;
}
