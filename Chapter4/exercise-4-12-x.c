/*Примените идеи, которые мы использовали в рrintd, длянаписания рекурсивной версии
функции itoa; иначе говоря, преобразуйте целое число в строку цифр с помощью рекурсивной программы*/

#include <stdio.h>

#define MAX 10

int i, flag = 0;
int stack;
int sign = 0;

void itoa (int n, char s[])
{
    if (n < 0) {
      sign = n;
      n = -n;
    }
	if(flag != 1) {
		stack = n;
		flag = 1;
	}
    if ((n / 10) > 0) {
        itoa(n / 10, s);
    }
    s[i++] = n % 10 + '0';
    if(n == stack) {
    	s[i++] = '\0';
    } else if(sign < 0) {
        s[i++] = '-';
    }

}

int main()
{
  int a = 264;
  char b[MAX];
  itoa(a, b);
  printf("a => %d\n" ,a);
  printf("b => %s\n" ,b);
}
