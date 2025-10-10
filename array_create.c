#include <stddef.h>
#include <stdlib.h>

int array_fill(int* array, int array_len, int begin, int end);

int* array_create_evens(int begin, int end) {
    if (begin > end) {
        return NULL;
    }

    int first_even = begin;
    if (first_even % 2 != 0) {
        ++first_even;
    }

    if (first_even > end) {
        return NULL;
    }

    int last_even = end;
    if (last_even % 2 != 0) {
        --last_even;
    }

    int count = ((last_even - first_even) / 2) + 1;
    int* evens = (int*)malloc(sizeof(int) * count);
    if (evens == NULL) {
        return NULL;
    }

    array_fill(evens, count, 0, count - 1);

    for (int i = 0; i < count; ++i) {
        evens[i] = first_even + (evens[i] * 2);
    }

    return evens;
}
