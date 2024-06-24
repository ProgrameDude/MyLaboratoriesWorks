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
