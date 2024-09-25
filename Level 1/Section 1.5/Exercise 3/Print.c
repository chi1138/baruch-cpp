#include <stdio.h>

void print(int i){ //use void as we don't return result
    int res = 0;
    res = i * 2;
    printf("%d mutiply by 2 is %d\n", i, res);
}
