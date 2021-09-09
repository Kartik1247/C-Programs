#include <stdio.h>

int main()
{
 int number;

 printf(" Enter any number:\n ");
 scanf("%d",&number);

 if (number > 0)
   printf("%d is positive number", number);

 else if (number < 0)
   printf("%d is a negative number.", number);

 else
   printf(" You entered value zero.");

 return 0;
}