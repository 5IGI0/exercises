/**
 * @file main.c
 * @author 5IGI0
 * @brief Factorial Challenge (partial (integeroverflow)) (https://www.cprogramming.com/challenges/factorial.html)
 * @version 0.1
 * @date 2021-06-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdint.h>
#include <math.h>

unsigned int count_zero(uint64_t a) {
    unsigned int count = 0;

    while (a != 0) {
        if (a%10 == 0) {
            count++;
            a /= 10;
        } else
            break;
    }

    return count;
}

int main(int argc, char const *argv[]) {

    unsigned int count = 0;
    uint64_t fact = 1;
    int num = 0;
    
    if (argc != 2) {
        printf("usage: %s <number>\n", argv[0]);
        return 1;
    } else if (sscanf(argv[1], "%d", &num) != 1 || num < 1) {
        printf("usage: %s <number>\n", argv[0]);
    }

    for (int i = 1; i <= num; i++) {
        fact *= i;
        unsigned int c = count_zero(fact);
        fact /= pow(10, c);
        count += c;
    }
    
    printf("%u\n", count);

    return 0;
}
