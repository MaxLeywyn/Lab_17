#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>


BagOfWords _bag;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[20]="abe,abbba,ava";

    printf("%d",countPalindromicWords(a));

    return 0;

}
