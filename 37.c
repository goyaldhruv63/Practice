#include<stdio.h>
int main()
{
	float a,b;
	char c;
    printf("Enter\n+ for addition\n- for substraction\n* for multiplication\n/ for division\n");
	scanf("%c", &c);
	printf("Enter the value of a :");
	scanf("%f", &a);
	printf("Enter the value of b :");
	scanf("%f", &b);
   if(c=='+')
	  printf("Answer is %.2f", a+b);
	
   else if(c=='-')
	  printf("Answer is %.2f", a-b);
	
   else if(c=='*')
	  printf("Answer is %.2f", a*b);
	
   else if(c=='/')
	  printf("Answer is %.2f", a/b);
	
   else
	  printf("Invalid Selection");
	return 0;
}
