/**
 * @file main.c
 * @author 5IGI0
 * @brief File Size Challenge (https://www.cprogramming.com/challenges/file_size.html)
 * @version 0.1
 * @date 2021-06-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>

int main(int argc, char const *argv[]) {
    uint8_t buffer[255];

    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "rb");
        unsigned int count = 0;
        unsigned int r = 0;

        if (file==NULL) {
            printf("%-15s: %s\n", argv[i], strerror(errno));
            continue;
        }
        
        while ((r=fread(buffer, 1, 255, file))) {
            count += r;
        }

        fclose(file);
        printf("%-15s: %u\n", argv[i], count);
    }
    

    return 0;
}