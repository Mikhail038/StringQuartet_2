#include "core.h"


/*char* MYinit (char* str)
{
    int length = MYstrlen (str);

    for (int i = 0; i < length + 1; i++)
    {
        str[i] = '\0';
    }

    return str;
}*/

//убрать эту функцию
/*char* MYinitLength (char* str, int length)
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    for (int j = i; j < length + 1; j++)
        {
            str[j] = (j < length) ? ' ' : '\0';
        }
    return str;
}*/

int MYputs (const char* str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putchar (str[i]);
        i++;
    }

    if (i > 0)
    {
        putchar('\n');
        return i;
    }

    putchar('\n');
    return EOF;
}

char* MYstrchr (const char* str, int sym)
{
    //char* ptr = (char*) str;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == sym)
            return (char*) str + i;
        i++;
    }

    return NULL;
}

int MYstrlen (const char* str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

char* MYstrcpy (char* cpy, const char* str)
{
    assert (cpy != NULL);
    assert (str != NULL);

    int i = 0;

    while (str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }

    cpy[i] = '\0';
    return cpy;
}

char* MYstrncpy (char* cpy, const char* str, int n)
{
    assert (cpy != NULL);
    assert (str != NULL);

    //сделай нормально!!!
    int i = 0;

    for (; (i < n) && (str[i] != '\0'); i++)
    {
        cpy[i] = str[i];
    }

    cpy[i] = '\0';
    return cpy;
}

char* MYstrcat (char* base_str, const char* str_plus)
{
    int old_length = MYstrlen (base_str);
    int length = old_length + MYstrlen (str_plus);

    int i = old_length;

    for (; i < length; i++)
    {
        base_str[i] = str_plus[i - old_length];
    }

    base_str[i] = '\0';
    return base_str;
}

char* MYstrncat (char* base_str, const char* str_plus, int n)
{
    int old_length = MYstrlen (base_str);
    int length = old_length + MYstrlen (str_plus);

    //printf ("l %d\n", length);

    int i = old_length;

    for (; i < length; i++)
    {
        if (i == n + old_length)
            break;
        base_str[i] = str_plus[i - old_length];
        //printf ("%d %c\n", i, base_str[i]);
    }

    base_str[i] = '\0';
    return base_str;
}

char* MYfgets (char* str, int n, FILE* stream)
{
    int i = 0;
    char sym = '0';

    while ( (i <= n - 2) && (feof (stream) == 0) && ((sym = fgetc (stream)) != '\n') )
    {
        str[i] = sym;
        i++;
    }

    str[i] = '\0';
    return str;
}

char* MYstrdup (const char* str)
{
    char* cpy = (char*) calloc (MYstrlen (str) + 1, sizeof (*cpy));

    int i = 0;

    do
    {
        cpy[i] = str[i];
        i++;
    } while (str[i] != '\0');

    cpy[i] = '\0';
    return cpy;
}

char* MYgetline (char* str, int n, char separator)
{
    int i = 0;
    char sym = getchar ();

    while ( (sym != separator ) && (i < n) )
    {
        str[i] = sym;
        sym = getchar ();
        i++;
    }

    str[i] = '\0';
    return str;
}

int MYstrcmp (const char* str1, const char* str2)
{
    int i = 0;

    while ( (str1[i] == str2[i]) && (str1[i] != '\0') )
    {
        i++;
    }

    return (int) (str1[i] - str2[i]);
}








