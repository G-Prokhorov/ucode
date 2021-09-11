#include <stdbool.h>
#include <stdio.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];
        if (mx_islower(c))
        {
            s[i] = mx_islower(c);
        }
        else if (mx_isupper(c))
        {

            s[i] = mx_tolower(c);
        }
    }

    printf("%s\n", s);
}

int main()
{
    char *s = "HeLLoNeo";
    mx_reverse_case(s);
}
