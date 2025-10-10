#include <stddef.h>

void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src1_cap <= 0) {
        return;
    }

    int dest_len = 0;
    while (dest_len < src1_cap && src1[dest_len] != '\0') {
        ++dest_len;
    }

    if (dest_len >= src1_cap) {
        src1[src1_cap - 1] = '\0';
        return;
    }

    if (src2 == NULL) {
        return;
    }

    int space_left = src1_cap - dest_len - 1;
    int i = 0;

    while (space_left > 0 && src2[i] != '\0') {
        src1[dest_len] = src2[i];
        ++dest_len;
        ++i;
        --space_left;
    }

    src1[dest_len] = '\0';
}
