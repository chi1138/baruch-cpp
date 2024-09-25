#include <stdio.h>

int main(){
    int temp_F = 0; //the initial value for Fahrenheit
    double temp_C = 0;
    int max_temp_F = 300; //the max value for Fahrenheit
    
    printf("The corresponding temperatures in Celsius for Fahrenheit from 0 to 300 are:\n");
    while (temp_F <= max_temp_F) {
        temp_C = (5.0/9.0)*(temp_F -  32);

        printf("Fahrenheit: %d\tCelsius: %10.1f\n", temp_F, temp_C);

        temp_F = temp_F + 20; //change the increment
    }
    
    return 0;
}
