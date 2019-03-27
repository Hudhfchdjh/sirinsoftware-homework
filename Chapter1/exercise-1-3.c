/*Усовершенствуйте программу преобразования температур таким образом, чтобы над
таблицей она печатала заголовок.*/

#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahr = lower;
    printf("|Fahr|Celsius|\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf ("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
