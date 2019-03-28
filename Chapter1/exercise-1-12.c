/*Напишите программу, которая печатает содержимое своего ввода, помещая по одному
слову на каждой строке.*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c;
    int logh;
    logh = OUT;
    while((c = getchar()) != EOF){
          if (c != '\n' && c != ' ' && c != '\t'){
              logh = IN;
              putchar(c);
          }
          else if (logh == IN){
                  logh = OUT;
                  putchar('\n');
          }
      }
     return 0;
}
