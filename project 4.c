//4.	The length and breadth are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle.
#include<stdio.h>
int main()
{
	int l,b;
	printf("enter l= \nand b=");
	scanf("%d %d",&l,&b);
	printf("area=%d perimeter=%d",
	l*b,
	2*(l+b));
	return 0;
}
