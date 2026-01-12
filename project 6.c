//6.	Write a program to convert entered number of seconds into hours, minutes and seconds.
#include<stdio.h>
int main()
{
	int s;//s means total seconds for conversion
	printf("enter seconds=");
	scanf("%d",&s);
	printf("hours=%d minutes=%d seconds=%d",s/60/60,s/60%60,s%60);
	return 0;
}
