#include<stdio.h>  
 int main()    
{    
int a,b;    
printf("Enter any two numbers for a and b:-\n");    
scanf("%d %d",&a,&b);
printf("Before swapping a =%d b=%d",a,b);
a=a+b;  
b=a-b;   
a=a-b;  
printf("\nAfter swapping a=%d b=%d",a,b);    
return 0;  
}   