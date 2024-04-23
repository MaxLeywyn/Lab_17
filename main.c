#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>


BagOfWords _bag;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[20]="ae rgr aere";
    char b[20]="rr aaa f";
    char c[45];

    createNewFlipFlopStr(a,b,c);

    printf("%s",c);

    return 0;

}
