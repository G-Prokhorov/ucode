#include <stdbool.h>
#include <stdio.h>

bool mx_isdigit(int c)
{
    return (48 <= c && c <= 57);
}

int main()
{
    printf("%d\n", mx_isdigit('0'));
}
