#include <stdio.h>

/*
Input argument type should be unsigned int.
Return type should be long long.
No need to check if i==1 -- that is implicit.
The function should be named 'factorial'.
Factorial should return the result, not printf it.
It's up to the caller of the function to decide what to do with the result.
*/


int recursion(int num);

int main()
{
    int num = 6;

    printf("%d! is equivalent to ", num);
    recursion(num);

    return 0;
}

int recursion(int i){
    if (i == 0){
        printf("%d\n", i);
        return 1;
    }
    else if (i == 1){
        printf("%d\n", i);
        return 1;
    }
    else {
        printf("%d*", i);
        return recursion (i - 1);
    }

}
