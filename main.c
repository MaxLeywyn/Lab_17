#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>


BagOfWords _bag;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[15]="ff aaa lkli";
    char b[20]="rr aaa f";
    char c[45];

    WordDescriptor word;

    printf("%d",getWordBeforeFirstWordWithA(a,&word));
    printf("%s",word.begin);

    return 0;

}
