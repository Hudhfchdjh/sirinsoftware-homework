/*Напишите программу для подсчета пробелов, табуляций и новых строк.*/

#include <stdio.h>

int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
            if (c == '\n') {
                ++nl;
            } else if (c == ' ') {
                ++nl;
            } else if (c == '\t') {
                ++nl;
            }
            printf ("%d\n", nl);
            return 0;
}
