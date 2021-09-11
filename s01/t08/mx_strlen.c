#include <stdio.h>

int mx_strlen(const char *s);

int main() {
    int a = mx_strlen("1234567890");
    printf("%i %i \n", a);
}

int mx_strlen(const char *s) {
    int count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    return count;
}