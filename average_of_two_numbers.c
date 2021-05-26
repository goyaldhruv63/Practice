#include<stdio.h>
int main()
{
	int num1,num2;
	float avg;
	printf("enter first number: ");
	scanf("%d",&num1);
	printf("enter second number: ");
	scanf("%d",&num2);
	
	avg=(float)(num1+num2)/2;
	printf("average of num1 and num2 is: %.2f",avg);
	
	return 0;
}
