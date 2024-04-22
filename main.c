#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>



int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[9]="f3j 32 4";

    replace(a,"32","1234");

    printf("%s",a);

    return 0;
}
