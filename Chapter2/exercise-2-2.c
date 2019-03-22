/*for (i = 0; i < lim-1 && (с = getchar()) != EOF && с != '\n'; ++i)
  s[i] = c; => Напишите цикл, эквивалентный приведенному выше fоr-циклу, не пользуясь операторами
&& и ||.*/
#include<stdio.h>

int main(){
  int i, c;
  int lim = 10;
  for(i = 0; i < lim-1;++i){
    if((c = getchar()) != EOF){
      if(c != '\n'){
      }
      else{
        break;
      }
    }
    else{
      break;
    }

  }
}
