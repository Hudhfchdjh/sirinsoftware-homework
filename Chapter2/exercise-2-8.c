/*Напишите функцию rightrot(х, n), которая циклически сдвигает x вправо на n
разрядов.*/

#include <stdio.h>

void rightrot(int x, int n)
{
    int i, j;
    j = n;
    for (i = 0; i <= j; i++) {
        printfbit(x >> n);
        printf("\n");
        n--;
    }
}

void printfbit(unsigned n)
{
    int i;
    for (i = 7; i >= 0; --i) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int x = 6;
    int n = 3;
    rightrot(x, n);
}
