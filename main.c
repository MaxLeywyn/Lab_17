#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>


BagOfWords _bag;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[20]="wrwr tre gtr ";
    char b[20]="f aa t ytu ";
    char c[45];

    WordDescriptor word;

    getWord(a,&word);



    printf("%s   ",a);
    printf("%d", isWithoutRepeatSymbols(&word));

    return 0;

}
