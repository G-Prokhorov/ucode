#include <stdbool.h>
#include <stdio.h>

bool mx_isupper(int c)
{
    return (65 <= c && c <= 90);
}

int main()
{
    printf("%d\n", mx_isupper('A'));
    printf("%d\n", mx_isupper('z'));
}
