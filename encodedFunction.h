#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


char* encode(char* country, int len, int* points) {    
    char* output = (char*)malloc(sizeof(char)* (len));
    printf("input: %s, len: %d.\n", country, len);
    for (int i = 0; i < len; i++){
        output[1] = '*';
    }

    return output;
}