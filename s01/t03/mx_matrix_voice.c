#include <unistd.h>

void mx_matrix_voice(void);

int main() {
    mx_matrix_voice();
}

void mx_matrix_voice(void) {
    int c[] = {94, 71, 37, 10};
    write(1, c, 13);
}