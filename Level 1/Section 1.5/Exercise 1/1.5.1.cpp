#include <stdio.h>


// no reason to restrict to integer
int minus(double num1, double num2)
{
    return num1 - num2;
}

int main(){
    double result = 0;
    double a = 10;
    double b = 8;

    result = minus(a,b);

    printf("%.1f minus %.1f equals: %.1f \n", a, b, result);

    return 0;
}