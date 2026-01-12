//5.	Write a program to divide one integer by another integer and find the quotient and remainder.
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x=");
	scanf("%d",&x);
	printf("enter y=");
	scanf("%d",&y);
	printf("quotient=%d reminder=%d",x/y,x%y);
	return 0;
}
