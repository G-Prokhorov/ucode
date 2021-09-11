#include "mx_printchar.c"
#include <stdbool.h>

void mx_print_alphabet(void);

int main() {
    mx_print_alphabet();
}

void mx_print_alphabet() {
    bool upper = true;

    for (int i = 0; i < 26; i++) {
        int letter;
        if (upper) {
            letter = i + 65;
        } else {
            letter = i + 97;
        }

        mx_printchar(letter);

        upper = !upper;
    }

    mx_printchar(10);
}