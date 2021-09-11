#include <unistd.h>
#include "mx_strlen.c"

int mx_printstr(const char *s)
{
    write(1, s, mx_strlen(s));
}