int mx_toupper(int c)
{
    if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
    {
        return (65 <= c && c <= 90) ? c : c - 32;
    }

    return c;
}
