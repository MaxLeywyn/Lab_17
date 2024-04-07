#include "string_test.h"
#include "string_.h"

void findNonSpace_test(){
    char a[]="  3 feh";
    assert(*findNonSpace(a)=='3');
    char b[]=" ";
    assert(*findNonSpace(b)=='\0');
}
