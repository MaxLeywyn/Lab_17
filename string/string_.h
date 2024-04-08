#ifndef LAB_17_STRING__H
#define LAB_17_STRING__H

#include <stdio.h>

int strlen1(char *s);

size_t strlen2(char *s);

size_t strlen_(const char *begin);

char* find(char *begin, char *end, int ch);

char* findNonSpace(char *begin);

char* findSpace(char *begin);

char* findNonSpaceReverse(char *rbegin, const char *rend);

char* findSpaceReverse(char *rbegin, const char *rend);

#endif //LAB_17_STRING__H
