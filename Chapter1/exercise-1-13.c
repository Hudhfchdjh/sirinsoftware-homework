/*Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко
рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача.*/

#include <stdio.h>

int main(){
    int c, i, j = 0;
    while((c = getchar()) != EOF){
        j++;
      for(i = 0; i < j; ++i){
          printf("|");
      }
      printf(" > %d\n" ,j);
    }
}
// for (i = 0; i < MAXLEN; ++i){
//         printf("%d : ", i);
//         for (j = 0; j <= wlength[i]; ++j)
//             printf("|");
//         printf(" > %d\n", j);s
