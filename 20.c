#include<stdio.h>
int main()
{
	int a,b=0,c=0;
	printf("enter a no.");
	scanf("%d",&a);
	a=a/100;
	b=a%10;
	c=a+b;
	printf("the sum of first and last digit is:%d",c);
	return 0;
	
}
