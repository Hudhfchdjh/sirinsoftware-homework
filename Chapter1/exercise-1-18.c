/*Напишите программу, которая будет в каждой вводимой строке заменять стоящие подряд
символы пробелов и табуляций на один пробел и удалять пустые строки.*/

#include <stdio.h>

  #define MAXLINE 1000 /* максимальный размер вводимой строки + 1 */

  int getl(char line[], int maxline);
  int counter(char to[], char from[]);

int main()
{
      int len; /* длина текущей строки */
      char line[MAXLINE]; /* текущая строка */
      char newline[MAXLINE]; /* новая строка */

      len = 0;
      while ((len = getl(line, MAXLINE)) > 0) {
          if ((len = counter(newline, line)) != 1)
          printf("%s", newline);
      }
      return 0;
}

  int getl(char s[], int lim)
  {
      int c, i;

      for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
          s[i] = c;
      if (c == '\n') {
          s[i] = c;
          ++i;
      }
      s[i] = '\0';
      return i;
  }
int counter(char newe_str[], char old_str[])
{
      int c, i, j, sflag;

      i = 0;
      j = 0;
      sflag = 0;
      while ((c = old_str[i]) != '\n') {
          if (c == ' ' || c == '\t'){
              if (sflag == 0) {
                  newe_str[j] = ' ';
                  sflag = 1;
                  ++j;
              }
          }
          else {
              newe_str[j] = c;
              sflag = 0;
              ++j;
          }
          ++i;
      }

      if (c == '\n') {
          newe_str[j] = c;
          ++j;
      }
      newe_str[j] = '\0';
      return j;
}
