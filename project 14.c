/*14.	Two numbers are input through the keyboard.
 Write a program to interchange the  the contents.*/

#include<stdio.h>
//#include<math.h>
int main()
{
	int x,y,temp;
	printf("Output of CSIT assignment QN.14 by Bikram Bohara\n");
	printf("enter x = ");
	scanf("%d",&x);	
	printf("enter y = ");
	scanf("%d",&y);
	temp = x;
	x=y;
	y=temp;
	printf("after interchanging: x= %d, y= %d",x,y);	

	return 0;
}
