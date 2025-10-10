#include <stddef.h>

void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0) {
        return;
    }

    int write_cap = dest_cap - 1;
    if (write_cap < 0) {
        write_cap = 0;
    }

    int index = 0;
    while (index < write_cap) {
        dest[index] = c;
        ++index;
    }

    if (dest_cap > 0) {
        dest[index] = '\0';
    }
}
