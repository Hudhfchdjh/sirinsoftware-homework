/*Усовершенствуйте программу преобразования температур таким образом, чтобы над
таблицей она печатала заголовок.*/
#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    celsius = lower;
    printf("|Celsius|Fahr|\n");
    while(fahr <= upper){
        fahr = celsius * (5.0/9.0) + 32.0;
        printf ("%3.0f   %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
