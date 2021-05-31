#include <stdio.h>
int main()
{
   float celsius,fahrenheit;
   printf("enter temp in fahrenheit: ");
   scanf("%f",&fahrenheit);
   
   celsius=(fahrenheit-32)*5/9;
    printf("temperature in celsius=%.3f",celsius);
    
    return 0;
}
