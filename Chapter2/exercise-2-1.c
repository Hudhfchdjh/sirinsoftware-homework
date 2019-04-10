/*Напишите программу, которая будет выдавать диапазоны значений типов char, short,
int и long, описанных как signed и как unsigned, с помощью печати соответствующих значений из
стандартных заголовочных файлов и путем прямого вычисления. Определите диапазоны чисел с плавающей
точкой различных типов. Вычислить эти диапазоны сложнее.*/

#include <stdio.h>
#include <limits.h>

int main()
{
  printf("unsigned\n");
  printf("|-------------------------|\n");
  printf("char\n");
  printf("max value char =>%d\n" ,UCHAR_MAX );
  printf("----------------------------------\n");
  printf("int\n");
  printf("max value int =>%d\n" ,UINT_MAX );
  printf("-------------------------------\n");
  printf("long\n");
  printf("max value long =>%ld\n" ,ULONG_MAX );
  printf("-----------------------------------\n");
  printf("short\n");
  printf("max value short =>%d\n" ,USHRT_MAX );
  printf("-------------------------------------\n");
  printf("signed\n");
  printf("|-------------------------------------|\n");
  printf("char\n");
  printf("max value char =>%d\n" ,SCHAR_MAX );
  printf("min value char =>%d\n" ,SCHAR_MIN );
  printf("----------------------------------\n");
  printf("int\n");
  printf("max value int =>%d\n" ,INT_MAX );
  printf("min value int =>%d\n" ,INT_MIN );
  printf("-------------------------------\n");
  printf("long\n");
  printf("max value long =>%ld\n" ,LONG_MAX );
  printf("min value long =>%ld\n" ,LONG_MIN );
  printf("-----------------------------------\n");
  printf("short\n");
  printf("max value short =>%d\n" ,SHRT_MAX );
  printf("min value short =>%d\n" ,SHRT_MIN );
}
