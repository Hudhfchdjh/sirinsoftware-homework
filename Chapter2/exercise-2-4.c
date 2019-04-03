/*Напишите версию функции squeeze(s1, s2), которая удаляет из s1 все символы,
встречающиеся в строке s2.*/

#include <stdio.h>

void squeeze(char s1[], char s2[]);
int strlen(char w2[]);

int len;

int main()
{
  char string1[] = "abcde";
  char string2[] = "abcdv";
  len = strlen(string2);
  squeeze(string1, string2);
  printf("string1 => %s\n string2 => %s\n", string1 ,string2);
}
void squeeze(char str1[], char str2[])
{
  int i, j, k;
  for (i = 0, j = 0; str1[j] != '\0'; ++i) {
      for (k = 0; str2[k] != str1[i] && str2[k] != '\0'; k++);
            if (k == len)
                str1[j++] = str1[i];
  }
     str1[j] = '\0';
 }

 int strlen(char s[])
  {
      int i;
      i = 0;
      while (s[i] != '\0')
          ++i;
      return i;
  }
