#include<stdio.h>
int main()
{
	float a,b;
	int c;
	printf("Enter the number: ");
	scanf("%f",&a);
	c= (int)a;
	b=a-c;
	printf("%d\n%f",c,b);
}
