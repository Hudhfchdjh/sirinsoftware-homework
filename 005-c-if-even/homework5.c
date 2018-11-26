#include <stdio.h>
int main()
{
    double number;/*оголошення змінної*/
    printf("Enter a number: ");/*вивод рядка*/
    scanf("%lf", &number);/*введення в рядок введення*/
    if (number < 0.0)/*оцінка значень змінних*/
        printf("You entered a negative number.");/*вивод рядка*/
    else if ( number > 0.0)/*оцінка протележного  результата*/
        printf("You entered a positive number.");/*вивод рядка*/
    else/*оцінка протележного  результата*/
        printf("You entered 0.");/*вивод рядка*/
    return 0;
}
