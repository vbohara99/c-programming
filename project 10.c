/*10.	If the marks obtained by a student in five different subjects are input
 through the keyboard, find out the aggregate marks and percentage marks obtained 
 by the student. Assume that the maximum marks obtained by a student in each subject are 100.*/
 #include<stdio.h>
 int main()
 {
 	float a,b,c,d,e,percentage;
 	printf("Output of CSIT assignment QN.10 by Bikram Bohara\n");
 	printf("enter marks in subject 1=");
 	scanf("%f", &a);
 	printf("enter marks in subject 2=");
 	scanf("%f", &b);
 	printf("enter marks in subject 3=");
 	scanf("%f", &c);
 	printf("enter marks in subject 4=");
 	scanf("%f", &d);
 	printf("enter marks in subject 5=");
 	scanf("%f", &e);
 	
 	
 	
 	printf("\naggregate  marks obtained is %.2f",(a+b+c+d+e));
 	
 	percentage=((a+b+c+d+e)/500)*100;
 	
 	printf("\npercentage  marks obtained by is %.2f %%",percentage);
 	
 	return 0;
 }
