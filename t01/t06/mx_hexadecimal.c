#include "mx_printchar.c"

void mx_hexadecimal(void);

int main() {
    mx_hexadecimal();
}

void mx_hexadecimal() {
    for (int i = 48; i <= 57; i++) {
        mx_printchar(i);
    }

    for (int i = 65; i <= 70; i++) {
        mx_printchar(i);
    }

    mx_printchar(10);
}