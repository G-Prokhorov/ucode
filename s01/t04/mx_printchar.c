#include <unistd.h>

void mx_printchar(char c);

int main() {
    mx_printchar(70);
}

void mx_printchar(char c) {
    write(1, &c, 1);
}