#include <stdbool.h>
#include <stdio.h>

bool mx_is_odd(int i)
{
    return !(i % 2 == 0);
}

int main()
{
    printf("%d\n", mx_is_odd(3));
}