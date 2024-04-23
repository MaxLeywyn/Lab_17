#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>


BagOfWords _bag;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[15]="ae rgr rere";
    char b[20]="rr aaa f";
    char c[45];

    WordDescriptor word;

    reverseWordOrder(b);

    printf("%s",b);

    return 0;

}
