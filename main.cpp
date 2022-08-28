
#include "core.h"


int main ()
{
    //Герои нашего времени
    //puts, strchr, strlen, strcpy, strncpy, strcat, strncat, fgets, strdup, getline, ++strcmp

    //printf ("I AM AILVE!\n");
    //char str[10] = {'1', 'a',' ','2', 'g','\0'};
    const char* str = "string !";

    char cpy[1024];
    char cpy1[1024];



    MYputs (str);

   // volatile char* tst; printf ("word `%s`\n", tst);//какого черта она не работает?! Дед сказал должно

    printf ("MYstrchr  %p\n strchr %p\n\n", MYstrchr (str,'g'), strchr (str,'g'));

    printf ("MYstrlen %d\n strlen %d\n\n", MYstrlen (str), strlen (str));

    printf ("MYstrcpy %s\n strcpy %s\n\n", MYstrcpy (cpy, str), strcpy (cpy1, str));


    //cpy = MYinit (cpy);ў

    printf ("MYstrncpy %s\n strncpy %s\n\n", MYstrncpy (cpy, str, 10), strncpy (cpy1, str, 10));

    printf ("MYstrcat  %s\n strcat %s\n\n", MYstrcat (cpy, str), strcat (cpy1, str));

    printf ("MYstrncat  %s\n strncat %s\n\n", MYstrncat (cpy, str, 4), strncat (cpy1, str, 4));

    char* cpyq = cpy;
    char* cpyq1 = cpy1;

    printf ("MYfgets  %s\n fgets %s\n\n", MYfgets (cpyq, 8, fopen ("fgets_test.txt", "r")),
                                        fgets (cpyq1, 8, fopen ("fgets_test.txt", "r")));

    printf ("MYstrdup %s\n strdup %s\n\n", MYstrdup (cpyq), strdup (cpyq1));
    free (cpyq);
    free (cpyq1);


    /*char aba[] = "BaBaBa";
    char abe[] = "BeBeBe";
    char* abas = aba;
    printf ("%s", abas);
    abas = abe;
    printf ("%s", abas);*/

    printf ("Enter string for getline (; - separator): ");

    printf ("MYgetline  %s\n", MYgetline (cpyq, 50, ';'));

    printf ("MYstrcmp %d\n strcmp %d\n\n", MYstrcmp (cpyq, "aboba"), strcmp (cpyq, "aboba"));

    return 0;
}
