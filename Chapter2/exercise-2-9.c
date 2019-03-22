#include<stdio.h>
int lower(int sos);
int main(){
  char stack_for_big_words[] = "HELLOMYFRIEND";
  int i;
  printf("OLD VALUE = > %s\n" ,stack_for_big_words);
  printf("NEW VALUE = > ");
    for(i = 0; stack_for_big_words[i] != '\0';++i){
      printf("%c" ,lower(stack_for_big_words[i]));
    }

    printf("\n");
}
int lower(int c){
  if(c > 'A' && c < 'Z'){
    c = c +'a'-'A';
    return c;
  }
  else{
    return c;
  }
}
