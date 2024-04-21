#include "string_processing.h"






char* getEndOfString(char *s){
    while (*s!='\0')
        s++;
    return s;
}

void removeNonLetters(char *s) {
    char *endSource = getEndOfString(s);
    char *destination = copyIf(s, endSource, s, isgraph);
    *destination = '\0';
}



void removeExtraSpaces(char *s){

}