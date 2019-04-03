/*Напишите функцию setbits(x, p, n, y), возвращающую значение x, в котором n
битов, начиная с p-й позиции, заменены на n правых разрядов из y (остальные биты не изменяются)*/

#include<stdio.h>

unsigned int setbits(int x, int p, int n, int y)
{
    return (y << (p+1-n)) | x;
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
    int y = 7;
    printfbit(x);
    printfbit(y);
    printfbit(setbits(x, 5, 3, y));
}
