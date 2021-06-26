/**
 * @file main.c
 * @author 5IGI0
 * @brief excercise 1 formationVideo (https://www.youtube.com/watch?v=JpKaxVCjAMw)
 * @version 0.1
 * @date 2021-06-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void) {
    
    unsigned int decimal = 0;

    printf("décimal    : ");
    scanf("%u", &decimal);
    printf(
        "octal      : %o\n"
        "hexadécimal: %X\n",
        decimal, decimal
    );

    return 0;
}
