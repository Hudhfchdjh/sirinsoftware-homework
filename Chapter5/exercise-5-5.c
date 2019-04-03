#include<stdio.h>
// #include<string.h>
/*Напишите варианты библиотечных функций strncpy, strncat и strncmp, которые
оперируют с первыми символами своих аргументов, число которых не превышает n. Например, strncpy
(t, s, n) копирует не более n символов t в s. Полные описания этих функций содержатся в приложении
В.*/
char *strncp(char *s, char *ct, int n);

int main(){
  char str1[] = "HELLO MY FRIEND";
  char str2[10];
  // int i = 5;
  printf("&str2 => %s\n" ,strncp(&str1, &str2, 32));
  // printf("str2 => %s\n" ,str2);
  return 0;
}
// char *strncpy(char *s, char *ct, int n){
//   int i;
//   for(ct++; i != 0; i++){
//     if(i == n){
//       i = 0;
//       *s++ = *--ct;
//         return s;
//
//     }
//   }
// }
char *strncp(char *s, char *ct, int n){
  int i = 0;
  while(i < n, *s++ = *ct++, ++i)
      ;
}
    //       if(i > n){
    //         *s++ = '\0';
    //         return s;
    //       }
    // if(i == n){
    //   i = 0;
    //   *s++ = *--ct;
    //     return s;
