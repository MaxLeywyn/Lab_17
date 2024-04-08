#include <stdio.h>
#include "string/string_.h"
#include "string/string_test.h"

int f(int a) {
    return a % 2 == 1 ? 1 : 0;
}

int main() {

    char a[] = "33 hwf";
    char b[] = "3";

    printf("%c",*(copyIf(a, a + strlen_(a), b,f)));



    return 0;
}
