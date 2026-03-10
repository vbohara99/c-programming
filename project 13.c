/*13.	Write a program to read three sides of a triangle
 and calculate the area. [Hint: Area=s(s-a)(s-b)(s-c)]*/
 #include<stdio.h>
 #include<math.h>
int main()
{
	int a,b,c;
	float s,area;
	printf("Output of CSIT assignment QN.13 by Bikram Bohara\n");
	printf("enter first side = ");
	scanf("%d", &a);
	printf("enter second side = ");
	scanf("%d", &b);
	printf("enter third side = ");
	scanf("%d", &c);
	s=(float )(a+b+c)/2.0;
	if((a + b) > c && (a + c) > b && (b + c) > a)
	{
		area=(float)(sqrt(s*( s - a ) * ( s - b ) * ( s - c )));
		printf("area=%f",area);
	}
	else
	{
		printf("error these sides cannot form a triangle.");
	}
	return 0;
}
