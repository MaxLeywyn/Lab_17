#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>



int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[15]="abe abe ";

    printf("%d",isWordsStandWithOrder(a));

    return 0;
}
