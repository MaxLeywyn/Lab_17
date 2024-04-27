#include <stdio.h>
#include "string/string_processing.h"
#include "string/string_processing_test.h"
#include <windows.h>




int main() {

    SetConsoleOutputCP(CP_UTF8);

    char a[2]="";
    char b[2]="";
    char c[45];

    deleteAllLikeEndWords(a);

    printf("%s", a);


    return 0;

}
