#include "string_processing_test.h"
#include <stdio.h>



void assertString(const char *expected, char *got,
                  char const *fileName, char const *funcName,
                  int line) {
    if (strcmp(expected, got)) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);
        fprintf(stderr, "Expected: \"%s\"\n", expected);
        fprintf(stderr, "Got: \"%s\"\n\n", got);
    } else
        fprintf(stderr, "%s - OK\n", funcName);
}

void removeExtraSpaces_test(){
    char a[11]="  3 4g |8";
    removeExtraSpaces(a);
    char b[11]="3 4g |8";
    ASSERT_STRING(b,a);
}