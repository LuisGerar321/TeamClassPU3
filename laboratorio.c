#include <stdio.h>
#include "./selectRandomLine.h"
#include "encodedFunction.h"
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int points = 0;
    char* variable = selectRandomLine("./paises.txt");
    printf("random country: %s\n", variable);
    
    char* variableToEncoded = encode(variable, strlen(variable), &points);
    printf( "country enconded: '%s'\n", variableToEncoded);

    return 0;
}