#include <stdio.h>

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
