/**
 * @file main.c
 * @author 5IGI0
 * @brief Temperature Converter Challenge (https://www.cprogramming.com/challenges/celsius_converter_table.html)
 * @version 0.1
 * @date 2021-06-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

#define STR(x) #x
#define TO_STR(x) STR(x)
#define LOW_LIMIT 0
#define HIGH_LIMIT_LOW 10
#define HIGH_LIMIT_HIGH 1000
#define STEP_LIMIT 10

void flush_stdin() {
    int chr = 0;
    while ((chr = fgetc(stdin)) != '\n') {
        if (chr == EOF)
            return;
    }
}

double to_fahrenheit(double c) {
    return (c*1.8) + 32;
}

int main(void) {
    int lowerLimit = 0;
    int higherLimit = 0;
    float step = 0;

    // setting lowerLimit
    while (1){
        fputs("Please give in a lower limit, limit >= "TO_STR(LOW_LIMIT)": ", stdout);
        if(scanf("%d", &lowerLimit) != 1) {
            flush_stdin();
            continue;
        }
        if (lowerLimit<LOW_LIMIT)
            continue;
        break;
    }
    
    // setting higherLimit
    while (1){
        fputs("Please give in a higher limit, "TO_STR(HIGH_LIMIT_LOW)" > limit <= "TO_STR(HIGH_LIMIT_HIGH)":", stdout);
        if(scanf("%d", &higherLimit) != 1) {
            flush_stdin();
            continue;
        }
        if (higherLimit<=HIGH_LIMIT_LOW || higherLimit > HIGH_LIMIT_HIGH)
            continue;
        break;
    }
    
    // setting step
    while (1){
        fputs("Please give in a step, 0 < step <= "TO_STR(STEP_LIMIT)":", stdout);
        if(scanf("%f", &step) != 1) {
            flush_stdin();
            continue;
        }
        if (step<=0 || step > STEP_LIMIT)
            continue;
        break;
    }

    puts("   Celsius Fahrenheit");
    puts("---------- ----------");

    for (double i = lowerLimit; i < higherLimit; i+=step) {
        printf("%10.3f %-10.3f\n", i, to_fahrenheit(i));
    }

    return 0;
}
