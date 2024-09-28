#include <stdio.h>

// function declaration
void DayName(int day_number);

int main(){

    // Initialize the day_numer
    int day_number;

    // Request user input from 1 to 7
    printf("Please enter a day number from 1 to 7: \n");
    scanf("%d", &day_number);

    // Send the result day_number to the function
    DayName(day_number);

    return 0;
}

void DayName(int day_number){

    // create a hard coded day name 
    char *day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
    "Friday", "Saturday"};

    // we use %s to print a string
    printf("Day %d is a %s. \n", day_number, day[day_number]);
}
