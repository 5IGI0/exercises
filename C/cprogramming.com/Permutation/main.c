/**
 * @file main.c
 * @author 5IGI0
 * @brief Challenges - Permutation Challenge (https://www.cprogramming.com/challenges/permute.html)
 * @version 0.1
 * @date 2021-06-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        printf("usage: %s <word>\n", argv[0]);
        return 1;
    }

    size_t word_size = strlen(argv[1]);
    char *word = malloc(word_size+1);
    strcpy(word, argv[1]);
    

    for (size_t i = 0; i < word_size; i++) {
        for (size_t j = 1; j < word_size; j++) {
            char tmp = word[word_size-j-1];
            word[word_size-j-1] = word[word_size-j];
            word[word_size-j] = tmp;

            puts(word);
        }
    }
    

    return 0;
}
