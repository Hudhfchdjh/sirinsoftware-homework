/*Напишите программу detab, заменяющую символы табуляции во вводимом тексте нужным
числом пробелов (до следующего "стопа" табуляции). Предполагается, что "стопы" табуляции расставлены на
фиксированном расстоянии друг от друга, скажем, через n позиций. Как лучше задавать n — в виде значения
переменной или в виде именованной констант*/

#include <stdio.h>

#define MAZX 100
#define MAZV 2

int getl(char s[], int lim)
{
      int c, i;

      for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
          s[i] = c;
      if (c == '\n'){
          s[i] = c;
          ++i;
      }
      s[i] = '\0';
      return i;
}

void detab(char to[], char from[])
{
    int i, j, k;
    i = j = 0;
    while((to[j] = from[i]) != '\0'){
    if (to[j] == '\t')
        for (k = 0; k < MAZV; ++k, ++j)
            to[j] = ' ';
    else
        ++j;
    ++i;
    }
    to[j] = '\0';
}

int main()
{
    int len;
    char line[MAZV];
    char newline[MAZX];
    while(len = getl(line, MAZV))
        detab(newline, line);
}
