#include "mx_printstr.c"

void mx_is_positive(int i)
{
    if (i == 0)
    {
        mx_printstr("zero\n");
    }
    else if (i > 0)
    {
        mx_printstr("positive\n");
    }
    else
    {
        mx_printstr("negative\n");
    }
}

int main()
{
    mx_is_positive(-1);
    mx_is_positive(3);
    mx_is_positive(0);
}