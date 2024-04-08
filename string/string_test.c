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

void findNonSpaceReverse_test(){
    char a[] = "31 hen";
    assert(*findNonSpaceReverse(a+ strlen_(a)-1,a-1)=='n');
    char b[] = "  ";
    assert(findNonSpaceReverse(b+ strlen_(b)-1,b-1)==b-1);
    char c[] = "";
    assert(findNonSpaceReverse(c+ strlen_(c)-1,c-1)==c-1);
}
