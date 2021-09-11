#include <stdio.h>

void mx_ref_pointer(int i, int ******ptr)
{
    // int *a = &i;
    // int **c = &a;
    // int ***d = &c;
    // int ****f = &d;
    // int *****e = &f;
    ******ptr = i;
}

int main()
{
    int num;
    int *a = &num;
    int **c = &a;
    int ***d = &c;
    int ****f = &d;
    int *****e = &f;
    int ******g = &e;
    mx_ref_pointer(122, g);
    printf("%i\n", num);
}