#include <stdbool.h>
#include <stddef.h>
#include <ctype.h> // Helpers

bool valid_password(const char* s) {
    if (s == NULL) {
        return false;
    }

    int length = 0;
    int lowercase_count = 0;
    int uppercase_count = 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        unsigned char ch = (unsigned char)s[i];

        if (!(islower(ch) || isupper(ch) || isdigit(ch))) {
            return false;
        }

        if (islower(ch)) {
            ++lowercase_count;
        } else if (isupper(ch)) {
            ++uppercase_count;
        }

        ++length;
        if (length > 10) {
            return false;
        }
    }

    if (length < 6 || length > 10) {
        return false;
    }

    if (lowercase_count < 2 || uppercase_count < 2) {
        return false;
    }

    return true;
}
