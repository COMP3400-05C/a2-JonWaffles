#include <stddef.h>

int array_fill(int* array, int array_len, int begin, int end) {
    if (array == NULL || array_len <= 0) {
        return 0;
    }
    if (begin > end) {
        return 0;
    }

    int current = begin;
    int filled = 0;

    while (filled < array_len && current <= end) {
        array[filled] = current;
        ++filled;
        ++current;
    }

    return filled;
}
