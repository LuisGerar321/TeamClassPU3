#include <stdio.h>
#include "./selectRandomLine.h"
#include <time.h>

int main(){
    srand(time(NULL));
    char* variable = selectRandomLine("./paises.txt");
    printf("random country: %s\n", variable);

    return 0;
}