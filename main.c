#include <stdio.h>
#include "string/string_processing.h"

#include <windows.h>



int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[10]=" 3 4g |83";

    removeNonLetters(a);

    printf("%s",a);

    return 0;
}
