#ifndef LAB_17_STRING_PROCESSING_H
#define LAB_17_STRING_PROCESSING_H

#include "string_.h"
#include <ctype.h>

char* getEndOfString(char *s);

void removeNonLetters(char *s);

void removeExtraSpaces(char *s);

void sortDigitsToEndWithOriginalOrder(char *s);

void replaceDigitsBySpaces(char *source, char *dest);

void replace(char *source, char *w1, char *w2);


#endif //LAB_17_STRING_PROCESSING_H
