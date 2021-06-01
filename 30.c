#include<stdio.h>
int main() 
{
   int a,b,c;
   printf("enter selling price :");   
   scanf("%d",&a);
    printf("enter cost  price :");   
   scanf("%d",&b);
     
   c=a-b;
   
   
   if(c>0)
    printf("profit of %d",c);  
   else
    c=-1*c; 
    printf("loss of %d",c); 
 
   return 0;
}
