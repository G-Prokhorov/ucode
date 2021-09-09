#include <unistd.h>
#include "mx_strlen.c"

int mx_printstr(const char *s);

int main() {
    int a = mx_printstr("1234567890\n");
}

int mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}