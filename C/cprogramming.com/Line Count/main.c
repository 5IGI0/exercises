/**
 * @file main.c
 * @author 5IGI0
 * @brief Line Count Challenge (https://www.cprogramming.com/challenges/count.html)
 * @version 0.1
 * @date 2021-06-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char const *argv[]) {
    char buffer[255];

    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "rb");
        unsigned int count = 1;

        if (file==NULL) {
            printf("%-15s: %s\n", argv[i], strerror(errno));
            continue;
        }
        
        // count line
        while (fgets(buffer, 255, file))
            if (buffer[strlen(buffer)-1]=='\n')
                count++;

        fclose(file);
        printf("%-15s: %u\n", argv[i], count);
    }
    

    return 0;
}
