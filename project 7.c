//7.	Write a program to convert entered number of days into years, months and days.
#include<stdio.h>
int main()
{
	int days;
	printf("enter days=");
	scanf("%d",&days);
	printf("%d years %d months %d days",
	days/365,
	days%365/30,
	days%365%30);
	return 0;
}
