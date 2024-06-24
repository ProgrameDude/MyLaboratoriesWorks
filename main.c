# include "libs/data_structures/matrix/matrix.h"
# include "stdio.h"
# include <stdlib.h>
# include <assert.h>

// task 2-3
void test_strlen_oneZeroElement() {
    char word[7] = {'H', 'e', 'l', 'l', 'o', '\0'};
    assert(strlen_(word) == 5);
}

void test_strlen_manyZeroElements() {
    char word[9] = {'H', 'e', 'l', 'l', 'o', '\0', '\0', '\0', '\0'};
    assert(strlen_(word) == 5);
}

// task 4
// есть элемент
void test_ind_isElement() {
    char word[7] = {'H', 'e', 'l', 'l', 'o', '\0'};
    assert(find(word, word + 3, 'e') == word + 1);
}

// нет элемента
void test_ind_isNoElement() {
    char word[7] = {'H', 'e', 'l', 'l', 'o', '\0'};
    assert(find(word, word + 3, 'k') == word + 3);
}

// есть не пробельный символ
void test_findNonSpace_isNonSpace() {
    char word[7] = {' ', ' ', ' ', 'k', 'o', '\0'};
    assert(findNonSpace(word) == word + 3);
}

// нет не пробельного символа
void test_findNonSpace_noNonSpace() {
    char word[7] = {' ', ' ', ' ', '\0'};
    assert(findNonSpace(word) == word + 3);
}

// есть пробельный символ
void test_findSpace_isSpace() {
    char word[7] = {'g', 'h', ' ', 't', ' ', '\0'};
    assert(findSpace(word) == word + 2);
}

// нет пробельного символа
void test_findSpace_noSpace() {
    char word[7] = {'k', 'w', 'a', '\0'};
    assert(findSpace(word) == word + 3);
}

// есть не пробельный символ
void test_findNonSpaceReverse_isNonSpace() {
    char word[7] = {'j', ' ', ' ', 'l', ' ', '\0'};
    assert(findNonSpaceReverse(word + strlen_(word) - 1, word - 1) == word + 3);
}

// нет не пробельного символа
void test_findNonSpaceReverse_noNonSpace() {
    char word[7] = {' ', ' ', ' ', '\0'};
    assert(findNonSpaceReverse(word + strlen_(word) - 1, word - 1) == word - 1);
}

// есть пробельный символ
void test_findSpaceReverse_isNonSpace() {
    char word[7] = {'j', ' ', ' ', 'h', 'p', '\0'};
    assert(findSpaceReverse(word + strlen_(word) - 1, word - 1) == word + 2);
}

// нет пробельного символа
void test_findSpaceReverse_noNonSpace() {
    char word[7] = {'A', 'B', 'C', '\0'};
    assert(findSpaceReverse(word + strlen_(word) - 1, word - 1) == word - 1);
}
