#ifndef LAB_17_STRING_PROCESSING_H
#define LAB_17_STRING_PROCESSING_H

#include "string_.h"
#include <ctype.h>


typedef struct WordDescriptor {
    char *begin; // позиция начала слова
    char *end; // позиция первого символа, после последнего символа
} WordDescriptor;


typedef struct BagOfWords {
    WordDescriptor words[MAX_N_WORDS_IN_STRING];
    size_t size;
} BagOfWords;

typedef enum WordBeforeFirstWordWithAReturnCode {
    FIRST_WORD_WITH_A,
    NOT_FOUND_A_WORD_WITH_A,
    WORD_FOUND,
    EMPTY_STRING
} WordBeforeFirstWordWithAReturnCode;

bool getWordReverse(char *rbegin, char *rend, WordDescriptor *word);

char* getEndOfString(char *s);

void removeNonLetters(char *s);

void removeExtraSpaces(char *s);

void sortDigitsToEndWithOriginalOrder(char *s);

void replaceDigitsBySpaces(char *source, char *dest);

void replace(char *source, char *w1, char *w2);

bool isWordsStandWithOrder(char *s);

void getBagOfWords(BagOfWords *bag, char *s);

void outputBagReverse(BagOfWords *bag);

int countPalindromicWords(char *s);

void createNewFlipFlopStr(char *s1, char *s2, char *new);

void reverseWordOrder(char *s);

WordBeforeFirstWordWithAReturnCode getWordBeforeFirstWordWithA(
        char *s, WordDescriptor *w);

#endif //LAB_17_STRING_PROCESSING_H
