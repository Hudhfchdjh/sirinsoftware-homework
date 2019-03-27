/*Напишите программу, печатающую гистограммы частот встречаемости вводимых
символов.*/

#include <stdio.h>

#define MAXLEN 10

int main()
{
      int i, c, ncw, j;
      int wlength[MAXLEN];

      ncw = 0;
      for (i = 0; i < MAXLEN; ++i)
          wlength[i] = 0;

          while ((c = getchar()) != EOF) {
              if (c == ' ' || c == '\n' || c == '\t'){
                  wlength[ncw] = wlength[ncw] + 1;
              // printf("sos => %d\n" ,wlength[ncw]);
                    ncw = 0;
          }
          else
              ++ncw;
      }

   for (i = 0; i < MAXLEN; ++i){
         printf("%d : ", i);
         for (j = 0; j <= wlength[i]; ++j)
             printf("|");
         printf(" > %d\n", wlength[i]);
  }
    return 0;
}
