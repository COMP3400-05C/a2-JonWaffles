#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>

char* capitalize(const char* s) {
    if (s == NULL) {
        return NULL;
    }

    int length = 0;
    while (s[length] != '\0') {
        ++length;
    }

    char* result = (char*)malloc((size_t)length + 1);
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < length; ++i) {
        unsigned char ch = (unsigned char)s[i];
        if (islower(ch)) {
            result[i] = (char)toupper(ch);
        } else {
            result[i] = s[i];
        }
    }

    result[length] = '\0';
    return result;
}
