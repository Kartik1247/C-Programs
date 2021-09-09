#include <stdio.h>
int main() {
    char operator;
    double p,q,r;
    printf("Enter an operator (+,-,*,/):-\n");
    scanf("%c", &operator);
    printf("Enter two operands:-\n");
    scanf("%lf %lf", &p, &q);
    
    switch (operator)
    {
    case '+':
        r = p + q;
        break;
    case '-':
        r = p - q;
        break;
    case '*':
        r = p * q;
        break;
    case '/':
        r = p / q;
        break;
    }
    printf("%lf",&r);
    return 0;
}