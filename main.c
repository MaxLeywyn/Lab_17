#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>


BagOfWords _bag;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[15]="abe abe fde ";

    getBagOfWords(&_bag,a);

    outputBagReverse(&_bag);


    return 0;
}
