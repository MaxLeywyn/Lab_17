#ifndef LAB_17_STRING_PROCESSING_TEST_H
#define LAB_17_STRING_PROCESSING_TEST_H

#include "string_processing.h"

#define ASSERT_STRING(expected, got) assertString(expected, got, __FILE__, __FUNCTION__, __LINE__)

void removeExtraSpaces_test();

void sortDigitsToEndWithOriginalOrder_test();

void replaceDigitsBySpaces_test();

void replace_test();

void isWordsStandWithOrder_test();

void countPalindromicWords_test();

void createNewFlipFlopStr_test();

void reverseWordOrder_test();

void getWordBeforeFirstWordWithA_test();

void getLastWordFromFirstThatInSecond_test();

void hasStringSameWords_test();

void hasTwoSameSymbolsWords_test();

void deleteAllLikeEndWords_test();

void findWordBeforeFirstBothInclusion_test();

void deleteWordsWithRepeatSymbols_test();

void completeSmallestString_test();

void allLettersWordInStr_test();

#endif //LAB_17_STRING_PROCESSING_TEST_H
