#include<stdio.h>
int main()
{
	float a,b,temp;
	printf("enter the value of a:");
	scanf("%f",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	
	temp=a;
	a=b;
	b=temp;
	printf("a=%f",a);
	printf("b=%f",b);
	return 0;
}
