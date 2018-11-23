#include <stdio.h>
int main()
{
    int num, count, sum = 0;/*ініціалізація змінних*/

    printf("Enter a positive integer: ");/*вивод рядка*/
    scanf("%d", &num);/*введення в рядок введення*/
    for(count = 1; count <= num; ++count)/*ініціалізація циклу оцінка аргументів циклу*/
    {
        sum += count;/*числові операції*/
    }

    printf("Sum = %d", sum);/*вивод рядка*/

    return 0;
}
