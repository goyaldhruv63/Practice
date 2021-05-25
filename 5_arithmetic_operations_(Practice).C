#include<stdio.h>
int main()
{
	float a,b,sum,sub,mult,div,avg;
	printf("enter the value of x and y");
	scanf("%f%f",&a,&b);
	sum=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	avg=(a+b)/2;

	
	printf("summation of a and b=%.2f",sum);
	printf("\nsubmission of a and b=%.2f",sub);
	printf("\nmultiplication of a and b=%.2f",mult);
	printf("\ndivision of a and b=%.2f",div);
	printf("\naverage of a and b=%.2f",avg);
	return 0;
	
	
}
