#include <stdio.h>
#include <stdlib.h>

char* selectRandomLine(char* path){
    //Your coude

    //Open the FILE
    FILE* fileVariable = fopen(path, "r");
    char lineMemory[10];
    int random = rand()%21;
    char* output = "AnyValueNotImportan";

    for (int line = 1 ; fscanf(  fileVariable, "%s", lineMemory ) != EOF  ; line++ ) {
        if ( line ==  random) {
            output = lineMemory;
            return output;
        }
    }
    return output;
}