#include <stdio.h>
#include <stdlib.h>

char* selectRandomLine(char* path){
    //Your coude

    //Open the FILE
    FILE* fileVariable = fopen(path, "r");
    char lineMemory[10];
    int random = rand()%21;
    if (random == 0) random = 1;

    for (int line = 0 ; fscanf(  fileVariable, "%s", lineMemory ) != EOF  ; line++ ) {
        if ( line ==  random) {
            char* output = lineMemory;
            return output;
        }
    }
    fclose(fileVariable);
    char* output = lineMemory;
    return output;
}