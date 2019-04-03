/*Напишите функцию invert(х, р, n), возвращающую значение x с инвертированными
n битами, начиная с позиции p (остальные биты не изменяются).*/

#include <stdio.h>

unsigned int invert(char x, char p, char n)
{
    char mask = (~(~0 << n) << (p+1-n));
    printfbit(mask);
    x = x ^ mask;
    return x;
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
    char x = 0xaa;
    printfbit(x);
    printfbit(invert(x, 8, 3));
}
