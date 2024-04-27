#include "string_processing_test.h"
#include <stdio.h>
#include <assert.h>


void assertString(const char *expected, char *got,
                  char const *fileName, char const *funcName,
                  int line) {
    if (strcmp(expected, got)) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);
        fprintf(stderr, "Expected: \"%s\"\n", expected);
        fprintf(stderr, "Got: \"%s\"\n\n", got);
    } else
        fprintf(stderr, "%s - OK\n", funcName);
}

void removeExtraSpaces_test() {
    char a[11] = "  3 4g |8";
    removeExtraSpaces(a);
    ASSERT_STRING("3 4g |8", a);
    char b[5] = "";
    removeExtraSpaces(b);
    ASSERT_STRING("", b);
    char c[12] = "  a";
    removeExtraSpaces(c);
    ASSERT_STRING("a", c);
}

void sortDigitsToEndWithOriginalOrder_test() {
    char a[13] = "3ewe 5fed34 ";
    sortDigitsToEndWithOriginalOrder(a);
    ASSERT_STRING("ewe3 fed534", a);
    char b[5] = "";
    sortDigitsToEndWithOriginalOrder(b);
    ASSERT_STRING("", b);
    char c[5] = "a3 ";
    sortDigitsToEndWithOriginalOrder(c);
    ASSERT_STRING("a3", c);
}

void replaceDigitsBySpaces_test() {
    char a[20] = "w3f tr3 gtr3";
    char b[40];
    replaceDigitsBySpaces(a, b);
    ASSERT_STRING("w   f tr    gtr", b);
    char c[2] = "";
    char d[4];
    replaceDigitsBySpaces(c, d);
    ASSERT_STRING("", d);
    char e[10] = "wrt rert";
    char f[10];
    replaceDigitsBySpaces(e, f);
    ASSERT_STRING("wrt rert", f);
}

void replace_test() {
    char a[20] = "w3f tr3 gtr3";
    replace(a, "w3f", "www");
    ASSERT_STRING("www tr3 gtr3", a);
    char b[5] = "";
    replace(b, "w3f", "www");
    ASSERT_STRING("", b);
    char c[20] = "WWWWW";
    replace(c, "WWWWW", "4");
    ASSERT_STRING("4", c);
}

void isWordsStandWithOrder_test() {
    char a[20] = "abe bet nerv ";
    assert(isWordsStandWithOrder(a) == 1);
    char b[20] = "bet abe nerv ";
    assert(isWordsStandWithOrder(b) == 0);
    char c[2] = " ";
    assert(isWordsStandWithOrder(c) == 1);
}

void countPalindromicWords_test() {
    char a[20] = "abe,abbba,ava";
    assert(countPalindromicWords(a) == 2);
    char b[22] = "abe,adbba,avda";
    assert(countPalindromicWords(b) == 0);
    char c[2] = "";
    assert(countPalindromicWords(c) == 0);
}

void createNewFlipFlopStr_test() {
    char a[20] = "abe cyber ava";
    char b[20] = "tr ava";
    char c[30];
    createNewFlipFlopStr(a, b, c);
    ASSERT_STRING("abe tr cyber ava ava", c);
    char d[2] = "";
    char e[20] = "tr ava";
    char f[20];
    createNewFlipFlopStr(d, e, f);
    ASSERT_STRING("tr ava", f);
    char g[2] = "";
    char h[2] = "";
    char i[2];
    createNewFlipFlopStr(g, h, i);
    ASSERT_STRING(i, i);
}

void reverseWordOrder_test() {
    char a[20] = "abe cyber ava";
    reverseWordOrder(a);
    ASSERT_STRING("ava cyber abe", a);
    char b[12] = "tr ava";
    reverseWordOrder(b);
    ASSERT_STRING("ava tr", b);
    char c[3] = "";
    reverseWordOrder(c);
    ASSERT_STRING("", c);
}

void getWordBeforeFirstWordWithA_test() {
    char a[20] = "abe cyber ava";
    char b[4] = "ava";
    WordDescriptor w1;
    getWord(b, &w1);
    assert(getWordBeforeFirstWordWithA(a, &w1) == 2);
    char c[20] = "abe cyber";
    char d[4] = "ava";
    WordDescriptor w2;
    getWord(d, &w2);
    assert(getWordBeforeFirstWordWithA(c, &w2) == 1);
    char e[20] = "ava cyber";
    char f[4] = "ava";
    WordDescriptor w3;
    getWord(f, &w3);
    assert(getWordBeforeFirstWordWithA(e, &w3) == 0);
    char g[3] = "";
    char h[4] = "ava";
    WordDescriptor w4;
    getWord(h, &w4);
    assert(getWordBeforeFirstWordWithA(g, &w4) == 3);
}

void getLastWordFromFirstThatInSecond_test() {
    char a[20] = "abe cyber ava";
    char b[4] = "ava";
    WordDescriptor w1;
    WordDescriptor w2;
    getWord(b, &w1);
    getWord(b, &w2);
    getLastWordFromFirstThatInSecond(a, b, &w1);
    assert(areWordsEqual(w1, w2) == 1);
    char c[20] = "abe cyber ava";
    char d[4] = "abe";
    getWord(d, &w1);
    getWord(d, &w2);
    getLastWordFromFirstThatInSecond(c, d, &w1);
    assert(areWordsEqual(w1, w2) == 1);
    char e[20] = "";
    char f[4] = "abe";
    getWord(f, &w1);
    getWord(f, &w2);
    getLastWordFromFirstThatInSecond(e, f, &w1);
    assert(areWordsEqual(w1, w2) == 0);
}

void hasStringSameWords_test() {
    char a[20] = "abe cyber ava";
    assert(hasStringSameWords(a) == 0);
    char b[20] = "ava ert ava";
    assert(hasStringSameWords(b) == 1);
    char c[3] = "";
    assert(hasStringSameWords(c) == 0);
}

void hasTwoSameSymbolsWords_test() {
    char a[20] = "abe cyber ava";
    assert(hasTwoSameSymbolsWords(a) == 0);
    char b[20] = "ava ert ava";
    assert(hasTwoSameSymbolsWords(b) == 1);
    char c[20] = "avae ert veaa";
    assert(hasTwoSameSymbolsWords(c) == 1);
    char d[3] = "";
    assert(hasTwoSameSymbolsWords(d) == 0);
}

void deleteAllLikeEndWords_test() {
    char a[20] = "abe cyber ava";
    deleteAllLikeEndWords(a);
    ASSERT_STRING("abe cyber", a);
    char b[20] = "ava cyber ava";
    deleteAllLikeEndWords(b);
    ASSERT_STRING("cyber", b);
}

void findWordBeforeFirstBothInclusion_test() {
    char a[20] = "abe cyber ava";
    char b[4] = "ava";
    char c[6] = "cyber";
    WordDescriptor w1;
    WordDescriptor w2;
    getWord(c, &w2);
    findWordBeforeFirstBothInclusion(a, b, &w1);
    assert(areWordsEqual(w1, w2) == 1);
    char d[20] = "abe cyber ava";
    char e[4] = "abe";
    char f[6] = "abe";
    getWord(f, &w2);
    findWordBeforeFirstBothInclusion(d, e, &w1);
    assert(areWordsEqual(w1, w2) == 1);
    char g[20] = "abe cyber ava";
    char h[4] = "abc";
    char i[6] = "abe";
    getWord(h, &w1);
    getWord(i, &w2);
    findWordBeforeFirstBothInclusion(g, h, &w1);
    assert(areWordsEqual(w1, w2) == 0);
}

void deleteWordsWithRepeatSymbols_test() {
    char a[20] = "abe cyber ava";
    deleteWordsWithRepeatSymbols(a);
    ASSERT_STRING("abe cyber", a);
    char b[10] = "ala ala";
    deleteWordsWithRepeatSymbols(b);
    ASSERT_STRING("", b);
    char c[6] = "cyber";
    deleteWordsWithRepeatSymbols(c);
    ASSERT_STRING("cyber", c);
}

void completeSmallestString_test() {
    char a[20] = "abe cyber ava";
    char b[4] = "ava";
    completeSmallestString(a, b);
    ASSERT_STRING("ava cyber ava", b);
    char c[6] = "cyber";
    char d[20] = "gg red barrel";
    completeSmallestString(c, d);
    ASSERT_STRING("cyber red barrel", c);
    char e[6] = "aar";
    char f[6] = "aar";
    completeSmallestString(e, f);
    ASSERT_STRING(e, f);
}

void allLettersWordInStr_test(){
    char a[20] = "abe cyber av";
    char b[4] = "ava";
    WordDescriptor w1;
    getWord(b,&w1);
    assert(allLettersWordInStr(w1,a)==1);
    char c[20] = "abe cyber";
    char d[4] = "ava";
    getWord(d,&w1);
    assert(allLettersWordInStr(w1,c)==0);
    char e[20] = "";
    char f[4] = "ava";
    getWord(f,&w1);
    assert(allLettersWordInStr(w1,e)==0);
    char g[20] = "ewe";
    char h[4] = "";
    getWord(h,&w1);
    assert(allLettersWordInStr(w1,g)==0);
}