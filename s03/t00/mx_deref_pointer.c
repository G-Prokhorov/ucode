#include <stdio.h>

void mx_deref_pointer(char ******str)
{
    *****str = "Follow the white rabbit";
}

int main()
{
    char *a;
    char **c = &a;
    char ***d = &c;
    char ****f = &d;
    char *****e = &f;
    char ******g = &e;
    mx_deref_pointer(g);
    printf("%s\n", a);
}