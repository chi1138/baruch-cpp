#include <stdio.h>
#include "Defs.h"

int main(){
    double a, b, c; // define the variables 
    a = 10.34;
    b = 10.25;
    c = 10.33;

    printf("the largest number between %f and %f is: %f\n", b, c, MAX2(b,c));
    printf("the largerest number between %f, %f, and %f is: %f\n", a, b, c, MAX3(a,b,c));

    return 0;
}