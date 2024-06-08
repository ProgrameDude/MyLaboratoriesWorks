# include "libs/data_structures/matrix/matrix.h"
# include "stdio.h"
# include <stdlib.h>
# include <assert.h>

// меняет местами строки, в которых находятся
// максимальный и минимальный элементы.
void swapRowsMinMaxElement(matrix m) {
    int row_min_el = getMinValuePos(m).rowIndex;
    int row_max_el = getMaxValuePos(m).rowIndex;
    swapRows(m, row_max_el + 1, row_min_el + 1);
}
// максимальный и минимальный элементы
// в разных строках.
void test_swapRowsMinMaxElement_differentRows() {
    matrix m = createMatrixFromArray(
            (int[]) {
                    1, 2, 3, 4,
                    5, 6, 7, 8,
                    9, 10, 11, 12,
            },
            3, 4
    );
    swapRowsMinMaxElement(m);
    assert(m.values[0][0] == 9);
    assert(m.values[0][1] == 10);
    assert(m.values[0][2] == 11);
    assert(m.values[0][3] == 12);
    assert(m.values[2][0] == 1);
    assert(m.values[2][1] == 2);
    assert(m.values[2][2] == 3);
    assert(m.values[2][3] == 4);
    freeMemMatrix(&m);
}

// максимальный и минимальный элементы
// в одной строке.
void test_swapRowsMinMaxElement_sameRow() {
    matrix m = createMatrixFromArray(
            (int[]) {
                    1, 9,
                    3, 5,
                    8, 4,
            },
            3, 2
    );
    swapRowsMinMaxElement(m);
    assert(m.values[0][0] == 1);
    assert(m.values[0][1] == 9);
    assert(m.values[1][0] == 3);
    assert(m.values[1][1] == 5);
    assert(m.values[2][0] == 8);
    assert(m.values[2][1] == 4);
    freeMemMatrix(&m);
}

int main() {
    test();

    return 0;
}
