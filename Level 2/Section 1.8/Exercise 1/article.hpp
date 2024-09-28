#ifndef Article_HPP
#define Article_HPP

#include <stdio.h>

struct ArticleData 
{
    int article;
    int quantity;
    char description[20]; // line of maximum 20 characters
};

void Print(struct ArticleData* data){
    printf("Article number: %i\n", data -> article);
    printf("Quantity: %i\n", data -> quantity);
    printf("Description: %s\n", data -> description);
};

#endif