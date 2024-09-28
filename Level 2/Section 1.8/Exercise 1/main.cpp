#include <stdio.h>
#include "article.hpp"

void Print(struct ArticleData* data);

int main(){

    // Declare and initialize structure
    struct ArticleData a = {10, 100, "Short description"};

    // Pointer to the structure
    struct ArticleData* data = &a;

    // call the print funciton with pointer
    Print(data);

    return 0;
}