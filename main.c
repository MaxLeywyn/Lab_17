#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>



int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[5]="f2j ";
    char b[10];

    replaceDigitsBySpaces(a,b);

    printf("%s",b);

    return 0;
}
