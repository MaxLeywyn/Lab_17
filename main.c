#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>


BagOfWords _bag;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[20]="wrf trh gtr";
    char b[20]="tra gtr";
    char c[45];

    WordDescriptor word;

    getWord(a,&word);


    printf("%d", allLettersWordInStr(word,a));
    printf("%s   ",a);


    return 0;

}
