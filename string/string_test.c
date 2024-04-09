#include "string_test.h"
#include "string_.h"

void findNonSpace_test() {
    char a[] = "  3 feh";
    assert(*findNonSpace(a) == '3');
    char b[] = " ";
    assert(*findNonSpace(b) == '\0');
    char c[] = "";
    assert(*findNonSpace(c) == '\0');
}

void findSpace_test() {
    char a[] = "3 feh";
    assert(*findSpace(a) == ' ');
    char b[] = "30feh";
    assert(*findSpace(b) == '\0');
    char c[] = "";
    assert(*findSpace(c) == '\0');
}

void findNonSpaceReverse_test() {
    char a[] = "31 hen";
    assert(*findNonSpaceReverse(a + strlen_(a) - 1, a - 1) == 'n');
    char b[] = "  ";
    assert(findNonSpaceReverse(b + strlen_(b) - 1, b - 1) == b - 1);
    char c[] = "";
    assert(findNonSpaceReverse(c + strlen_(c) - 1, c - 1) == c - 1);
}

void findSpaceReverse_test() {
    char a[] = "31 cfw";
    assert(*findSpaceReverse(a + strlen_(a) - 1, a - 1) == ' ');
    char b[] = " ";
    assert(*findSpaceReverse(b + strlen_(b) - 1, b - 1) == ' ');
    char c[] = "";
    assert(findSpaceReverse(c + strlen_(c) - 1, c - 1) == c - 1);
}

void strcmp_test() {
    char a[] = "33 hwf";
    char b[] = "33 hwf";
    assert(strcmp(a, b) == 0);
    char c[] = "33 \t";
    char d[] = "33 hwf";
    assert(strcmp(c, d) < 0);
    char e[] = "";
    char f[] = "";
    assert(strcmp(e, f) == 0);
    char g[] = "33 hwg";
    char h[] = "33 hwf";
    assert(strcmp(g, h) > 0);
}

void copy_test() {
    char a[] = "33 hwf";
    char b[] = "";
    assert(copy(a, a + strlen_(a), b) == b + strlen_(a) + 1);
    char c[] = "33 ";
    char d[] = "33 hwf";
    assert(copy(c, c + 1, d) == d + 2);
    char e[] = "";
    char f[] = "";
    assert(copy(e, e + strlen_(e), f) == f + strlen_(e) + 1);
}

int f(int a) {
    return (char)a > '0' && (char)a < '9' ? 1 : 0;
}

void copyIf_test(){
    char a[] = "33 hwf";
    char b[] = "";
    assert(copyIf(a, a + strlen_(a),b,f) == b + 2);
    char c[] = " hwf";
    char d[] = "";
    assert(copyIf(c, c + strlen_(c),d,f) == d);
    char e[] = "354488";
    char g[] = "87";
    assert(copyIf(e, e + strlen_(e),g,f) == g+6);
    assert(*(copyIf(e, e + strlen_(e),g,f)-1) == '8');
}


