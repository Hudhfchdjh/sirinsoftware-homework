/*Перепишите программу преобразования температур, выделив само преобразование в
отдельную функцию.*/

#include <stdio.h>

int set(int a)
{
    return 5 * (a - 32) / 9;
}
int main()
{
    int fahr;
    int lower, upper, step;
    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahr = lower;
    while (fahr <= upper) {
          printf ("%d\t%d\n", fahr, set(fahr));
          fahr = fahr + step;
    }
}
