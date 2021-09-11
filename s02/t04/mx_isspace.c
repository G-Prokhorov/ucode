#include <stdbool.h>
#include <stdio.h>

bool mx_isspace(int c)
{
    return (32 == c);
}

int main()
{
    printf("%d\n", mx_isspace(' '));
    printf("%d\n", mx_isspace(')'));
}
