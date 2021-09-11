#include <stdio.h>

void mx_swap_char(char *s1, char *s2)
{
    printf("%c %c\n", *s1, *s2);
    char tmp = *s1;
    s1 = s2;
    s2 = &tmp;
    printf("%c %c\n", *s1, *s2);
}

int main()
{
    char str[] = "ONE";
    printf("CHANGE\n");
    mx_swap_char(&str[0], &str[1]);
    printf("CHANGE\n");
    mx_swap_char(&str[1], &str[2]);
    printf("%s\n", str);
}
