#include <stdbool.h>
#include <stdio.h>

bool mx_islower(int c)
{
    return (97 <= c && c <= 122);
}

int main()
{
    printf("%d\n", mx_islower('A'));
    printf("%d\n", mx_islower('a'));
}
