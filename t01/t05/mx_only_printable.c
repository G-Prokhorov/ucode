#include "mx_printchar.c"

void mx_only_printable(void);

int main() {
    mx_only_printable();
}

void mx_only_printable() {
    for (int i = 126; i >= 32; i--) {
        mx_printchar(i);
    }
    int n = 10;
    mx_printchar(n);
}