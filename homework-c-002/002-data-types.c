#include <stdio.h> 
int main() 
{ 
    int a = 1; /*ініціалізація змінної*/
    char b ='G'; /*ініціалізація змінної*/
    double c = 3.14; /*ініціалізація змінної*/
    printf("Hello World!\n"); /*вивод рядка*/
    printf("Hello! I am a character. My value is %c and "/*вивод рядка*/
           "my size is %lu byte.\n", b,sizeof(char)); /*вивод рядка та показ скільки байтів в аргументі char*/
    printf("Hello! I am an integer. My value is %d and "/*вивод рядка*/
           "my size is %lu  bytes.\n", a,sizeof(int)); /*вивод рядка та показ скільки байтів в аргументі int*/
    printf("Hello! I am a double floating point variable."/*вивод рядка*/
           " My value is %lf and my size is %lu bytes.\n",c,sizeof(double)); /*вивод рядка та показ скільки байтів в аргументі double*/ 
    printf("Bye! See you soon. :)\n"); /*вивод рядка*/
  
    return 0; /**/
} 
