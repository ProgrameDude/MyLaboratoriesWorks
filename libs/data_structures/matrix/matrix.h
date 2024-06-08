#ifndef LABORATORIESWORKS_MATRIX_H
#define LABORATORIESWORKS_MATRIX_H

# include "stdbool.h"
# include "../../algorithms/array/array.h"

typedef struct matrix {
    int **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} matrix;

typedef struct position {
    int rowIndex;
    int colIndex;
} position;

#endif //LABORATORIESWORKS_MATRIX_H
