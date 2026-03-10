//11.	Write a program that will convert temperature in Centigrade into Fahrenheit. [Hint: C=5/9(F-32) and F=9/5*C+32]
#include<stdio.h>
int main()
{
	float  f,tem;
	printf("Output of CSIT assignment QN.11 by Bikram Bohara\n");
	printf("enter temperature in Centigrade : ");
	scanf("%f", &tem);
	
	f=9/5*tem+32;
	printf("temperture in fahrenheit = %f",f);
	return 0;
}
