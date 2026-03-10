//9.	Write a program to input three digit numbers and reverse the number.
#include<stdio.h>
int main()
{
	int num,a,b,c;
	printf("Output of CSIT assignment QN.9 by Bikram Bohara\n");
	printf("enter a three digit number(abc)=");
	scanf("%d",&num);
	
	if(num>=100&&num<=999)
	{
	a=num/100;
	b=(num/10)%10;
	c=num%10;
	printf("the reversed number is %d",c*100+b*10+a);
	}
	else{
		printf("the number is invalid i.e. number doesnt have three digits");
	}
	return 0;
}
