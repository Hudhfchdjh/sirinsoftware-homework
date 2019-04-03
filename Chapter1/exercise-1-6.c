/*Убедитесь в том, что выражение getchar() != EOF получает значение 0 или 1*/

#include "stdio.h"

int main()
{
    printf("%d\n", getchar() != EOF);
    return 0;
}
