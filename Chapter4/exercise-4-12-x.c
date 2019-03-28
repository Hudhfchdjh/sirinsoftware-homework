/*Примените идеи, которые мы использовали в рrintd, длянаписания рекурсивной версии
функции itoa; иначе говоря, преобразуйте целое число в строку цифр с помощью рекурсивной программы*/
#include<stdio.h>
// #include<string.h>
// void itoa (int n, char s[]);
// void reverse(char s[]);
#define MAX 3
int i = 0;
int sign = 0;
void itoa (int n, char s[]){
    if (n < 0) {
      sign = n;
      n = -n;
    }
    if ((n / 10) > 0){
        itoa(n / 10, s);
    }
    s[i++] = n % 10 + '0';
    if(n == MAX){
      s[i++] = '\0';
    }
    else if(sign < 0){
      s[i++] = '-';
    }
  // if(n = 0){
  //   s[i] = '\0'
  // }
  // printf("s[i] => %s\n" ,s);
  // if(sign < 0){
  //   s[i++] = '-';
  //   s[i] = '\0';
  // }
}
int main(){
  int a = 123;
  char b[MAX];
  itoa(a, b);
  printf("a => %d\n" ,a);
  printf("b => %s\n" ,b);
}
void itoa (int n, char s[])
{
  int i, sign;
  if ((sign = n) < 0) /* сохраняем знак */
  n = -n; /* делаем n положительным */
  i = 0;
  do { /* генерируем цифры в обратном порядке */
  s[i++] = n % 10 + '0'; /* следующая цифра */
  } while ((n /= 10) > 0); /* исключить ее */
  if (sign < 0)
  s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}
// void reverse(char s[])
// {
//   int c, i, j;
//   for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
//   c = s[i];
//   s[i] = s[j];
//   s[j] = c;
//   }
// }
