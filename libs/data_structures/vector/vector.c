# include "stdlib.h"
# include "vector.h"
# include <stdio.h>

void pushBack(vector *v, int x) {
    if (isFull(v))
        reserve(v, v->capacity * 2);
        v->data[v->size++] = x;
}

void popBack(vector *v) {
    if (isEmpty(v)) {
    fprintf(stderr, "empty array");
    exit(1);
}

    v->size--;
}

int* atVector(vector *v, size_t index) {
    if (index >= v->size) {
    fprintf(stderr, "IndexError: a[%zu] is not exists", index);
    exit(1);
}

    return v->data + index;
}

int* back(vector *v) {
    return v->data + v->size - 1;
}

int* front(vector *v) { return v->data;
}
