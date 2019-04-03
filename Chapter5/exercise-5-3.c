#include<stdio.h>
void strcat(char *a, char *b);
int main(){
  char str_one[100] = "HELLO BRO";
  char str_two[100] = "HAHA I WAS JOKING";
  printf("START = > 1str | 2str => %s | %s\n",str_one ,str_two);
  strcat(&str_one, &str_two);
  printf("FINAL = > 1str | 2str => %s | %s\n",str_one ,str_two);

}

void strcat(char *s, char *t){
  while(*s != '\0')
      *s++;
    while((*s++ = *t++) != '\0')
      ;
}
