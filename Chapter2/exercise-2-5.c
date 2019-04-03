/*Напишите функцию any(s1, s2), которая возвращает либо ту позицию в s1, где стоит
первый символ, совпавший с любым из символов в s2, либо -1 (если ни один символ из s1 не совпадает с
символами из s2)*/

#include "stdio.h"

char any(char s1[], char s2[]);

int main()
{
  char first_quantity_characters[] = "aaaaaaaaaaaabaaaaaaaaaa";
  char two_quantity_characters[] = "bbbbbbbbbbabbbbbbbbbbb";
  printf("Final => %d\n", any(first_quantity_characters, two_quantity_characters));
}

char any(char a[], char b[]){
  int i, j, c = 0;
  for (i = 0, j = 0; a[i] != b[j]; ++i,++j,++c) {
          if (a[i] == b[j]) {
              return c;
          } else {
              return -1;
          }

  }
}
