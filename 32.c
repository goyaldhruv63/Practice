#include<stdio.h>
int main()
{
	float unit,amount;
	printf("enter the meter reading : ");
	scanf("%f",&unit);
	if(unit<100)
	  printf("amount to pay for electricity bill=%f",amount=unit*2.25);
	else if
	  (100<unit<200)
	  printf("amount to pay for electricity bill=%f",amount=unit*3.00);
	else if
	  (200<unit<500)
	  printf("amount to pay for electricity bill=%f",amount=unit*4.25);
	else
	  printf("amount to pay for electricity bill=%f",amount=unit*7.00);
	  
	return 0;  
	  	
}
