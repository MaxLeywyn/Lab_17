#include "string_test.h"
#include "string_.h"

void findNonSpace_test(){
    char a[]="  3 feh";
    assert(*findNonSpace(a)=='3');
    char b[]=" ";
    assert(*findNonSpace(b)=='\0');
    char c[]="";
    assert(*findNonSpace(c)=='\0');
}

void findSpace_test(){
    char a[] = "3 feh";
    assert(*findSpace(a)==' ');
    char b[] = "30feh";
    assert(*findSpace(b)=='\0');
    char c[] = "";
    assert(*findSpace(c)=='\0');
}


