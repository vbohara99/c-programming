 /* 15.	If a five-digit number is entered through the keyboard, 
write a program to calculate the the sum of its digits.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int num,a,b,c,x,y;
	printf("Output of CSIT assignment QN.15 by Bikram Bohara\n");
	printf("enter a five digit number = ");
	scanf("%d", &num);	
	a=num/10000;
	b=(num/1000)%10;
	c=(num/100)%10;
	x=(num/10)%10;
	y=num%10;
	printf("sum of its digits=%d",a+b+c+x+y);
	return 0;
}
