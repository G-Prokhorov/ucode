#include <stdbool.h>
#include <stdio.h>

bool mx_isalpha(int c)
{
    return ((65 <= c && c <= 90) || (97 <= c && c <= 122));
}

int main()
{
    printf("%d\n", mx_isalpha('A'));
}
