/*Напишите функцию itob(n, s, b), которая переводит целое n в строку s,
представляющую число по основанию b. В частности, itob(n, s, 16) помещает в s текст числа n в
шестнадцатеричном виде.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

  void itob(int n, char s[], int b);
  void reverse(char s[]);

  int main(void) {
      char buffer[100];
      int i = 31;

      printf("Number: %d\n", i);
      itob(i, buffer, 16);
      printf("Buffer : %s\n", buffer);

      printf("INT_MIN: %d\n", INT_MIN);
      itob(INT_MIN, buffer, 16);
      printf("Buffer : %s\n", buffer);

      return 0;
  }


  void itob(int n, char s[], int b) {
      int i, sign;
      char digits[] = "0123456789ABCDEF";

      sign = n; /* ????????? ???? */

      i = 0;
      do {
          s[i++] = digits[n % b];
      } while ( n /= b );
      if (sign < 0)
          s[i++] = '-';

      s[i] = '\0';
      reverse(s);
  }
void reverse(char s[])
{
    int c, i, j;
      for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
          c = s[i];
          s[i] = s[j];
          s[j] = c;
      }
}
