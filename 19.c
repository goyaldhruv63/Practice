#include<stdio.h>
int main()
{
	int hindi,english,maths,science,social_science,aggr;
	printf("enter marks in hindi :");
	scanf("%d",&hindi);
	printf("enter marks in english :");
	scanf("%d",&english);
	printf("enter marks in maths :");
	scanf("%d",&maths);
	printf("enter marks in science");
	scanf("%d",&science);
	printf("enter marks in social_science");
	scanf("%d",&social_science);
	
	aggr=hindi+english+maths+science+social_science;
	
	printf("aggr marks=%d",aggr);
	
	return 0;
}
