#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>


BagOfWords _bag;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[14]="ff aa r aa";
    char b[9]="f aa t";
    char c[45];

    WordDescriptor word;

    getLastWordFromFirstThatInSecond(a,b,&word);

    printf("%s",word.begin);

    return 0;

}
