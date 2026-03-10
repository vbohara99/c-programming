/*16.	Two number are entered through keyboard and if the first number is greater than
 second number then print the sum of number otherwise print
  the difference of number (use tannery operator)*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,x;
	printf("Output of CSIT assignment QN.16 by Bikram Bohara\n");
	printf("enter a = ");
	scanf("%d",&a);	
	printf("enter b = ");
	scanf("%d",&b);	
	x=(a>b)?(a+b):(a-b);
	printf("x=%d",x);
	return 0;
}

