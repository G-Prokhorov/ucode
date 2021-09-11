int mx_tolower(int c)
{
    if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
    {
        return (97 <= c && c <= 122) ? c : c + 32;
    }

    return c;
}
