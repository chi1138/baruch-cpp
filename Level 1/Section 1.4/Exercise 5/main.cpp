#include <stdio.h>

int main(){
    int temp_C;
    int max_temp_C = 19; // set the maximum value for temp_C
    double temp_F = 0;
    
    printf("The corresponding temperatures in Fahrenheit for Celsuis from 0 to 19 are:\n");
    
    for (temp_C = 0; temp_C <= max_temp_C; temp_C++) {
        temp_F = (temp_C * 9.0/5.0) + 32;
        printf("Celsuis: %d\t Fehrenheit: %10.1f\n", temp_C, temp_F);
    }
    // set the starting value for Celsuis in temp_C = 0 inside the for loop
    // set the increment at temp_C++ inside the for loop
    
    return 0;
}
