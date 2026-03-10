/*18.	Write a program that ask the radius 
of sphere and print the volume of sphere.*/
#include<stdio.h>
int main()
{
	int r,pi=3.14;
	printf("Output of CSIT assignment QN.18 by Bikram Bohara\n");
	printf("enter a radius= ");
	scanf("%d",&r);
	printf("volume = %.2f ",(float)pi*pow(r,2));
	return 0;
}
