/*Напишите программу, копирующую символы ввода в выходной поток и заменяющую
стоящие подряд пробелы на один пробел.*/

#include <stdio.h>

int main()
{
    int c, sflag;

    sflag = 0;
    while((c = getchar()) != EOF){
        if (c != ' '){
            putchar(c);
        sflag = 0;
    }
    else if (sflag == 0){
        sflag = 1;
        putchar(c);
    }
    }
    return 0;
}
