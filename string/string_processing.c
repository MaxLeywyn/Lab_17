#include "string_processing.h"
#include <memory.h>
#include <stdlib.h>

//2
char *getEndOfString(char *s) {
    while (*s != '\0')
        s++;
    return s;
}

void removeNonLetters(char *s) {
    char *endSource = getEndOfString(s);
    char *destination = copyIf(s, endSource, s, isgraph);
    *destination = '\0';
}

//2
void removeExtraSpaces(char *s) {
    size_t i = 0;
    size_t j = 0;
    size_t spaces =0;

    for (i; *(s+i)!='\0'; i++) {
        if(*(s+i)!=' '){
            *(s+(j++)) = *(s+i);
            spaces=0;
        } else
            if(!spaces && j>0){
                *(s+(j++)) = ' ';
                spaces = 1;
            }
    }
    *(s+j) = '\0';
}

//3
typedef struct WordDescriptor {
    char *begin; // позиция начала слова
    char *end; // позиция первого символа, после последнего символа
} WordDescriptor;


int getWord(char *beginSearch, WordDescriptor *word) {
    word->begin = findNonSpace(beginSearch);
    if (*word->begin == '\0')
        return 0;
    word->end = findSpace(word->begin);
    return 1;
}


char _stringBuffer[MAX_STRING_SIZE + 1];


void digitToStart(WordDescriptor word) {
    char *endStringBuffer = copy(word.begin, word.end,
                                 _stringBuffer);
    char *recPosition = copyIfReverse(endStringBuffer - 1,
                                      _stringBuffer - 1,
                                      word.begin, isdigit);
    copyIf(_stringBuffer, endStringBuffer, recPosition, isalpha);
}

bool getWordReverse(char *rbegin, char *rend, WordDescriptor *word){
    word->end = findNonSpaceReverse(rbegin,rend)+1;
    if(word->end == rbegin){
        return 0;
    }
    word->begin = findSpaceReverse(word->end, rend)+1;
    return 1;
}


//Преобразовать строку таким образом, чтобы цифры каждого слова были
//перенесены в конец слова без изменения порядка следования их в слове, а
//буквы – в начало.


void digitToEndWithOriginalOrder(WordDescriptor word) {
    char *endStringBuffer = copy(word.begin, word.end,
                                 _stringBuffer);
    char *recPosition = copyIf(_stringBuffer,
                               endStringBuffer,
                                      word.begin, isalpha);
    copyIf(_stringBuffer, endStringBuffer, recPosition, isdigit);
}


void sortDigitsToEndWithOriginalOrder(char *s){
    WordDescriptor word;
    while (*s!='\0') {
        if (getWord(s, &word) && (!isspace(*s))) {
            digitToEndWithOriginalOrder(word);
            printf("%d ", (word.end - word.begin));
            s += (word.end - word.begin);
        }
        if(isspace(*s))
            s++;
    }
}

//char a[13]="3ewe 5fed34 " - пример


//4
void replaceDigitsBySpaces(char *source, char *dest) {
    size_t i = 0;
    size_t j = 0;

    while (*source != '\0') {
        if (isdigit(*(source+i))) {
            int numSpaces = *(source+i) - '0';
            for (int k = 0; k < numSpaces && j < MAX_STRING_SIZE-1; k++) {
                *(dest+(j++)) = ' ';
            }
        } else if (j < MAX_STRING_SIZE-1) {
            *(dest+(j++)) = *(source+i);
        }
        i++;
    }
    *(dest+j) = '\0';
}

//5
