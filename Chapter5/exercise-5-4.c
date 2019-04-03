#include<stdio.h>
// #include<string.h>
/*Напишите функцию strend(s, t), которая выдает 1, если строка t расположена в конце
строки s, и нуль в противном случа*/
int strend(char *a, char *b);
void strcat(char *c, char *d);
int main(){
  char str1[100] = "HELLO";
  char str2[100] = "HELLO";
  // strend(&str1, &str2);
  stract(&str1, &str2);
   printf("strend(&str1, &str2) => %d\n" ,strend(&str1, &str2));
}
void strcat(char *s, char *t){
  while(*s != '\0')
      *s++;
    while((*s++ = *t++) != '\0')
      ;
}
int strend(char *s, char *t){
  while(*s != '\0'){
      *s++;
          if(*s++ == *t++){
            return 1;
          }
            else{
              return 0;
            }
          }
}
