/*Напишите функцию escape(s, t), которая при копировании текста из t в s преобразует
такие символы, как новая строка и табуляция в "видимые последовательности символов" (вроде \n и \t).
Используйте инструкцию switch. Напишите функцию, выполняющую обратное преобразование эскейп-
последовательностей в настоящие символы.*/
#include<stdio.h>
void escape(char a[], char b[]);
#define MAXLIN 30
int main(){
  char stack[MAXLIN] = "sdsd\tsdsdsd\nsdsds";
  char final_stack[MAXLIN];
  printf("This is old string = > %s\n" ,stack);
  escape(stack, final_stack);
  printf("This is new string = > %s\n" ,final_stack);
  return 0;
}
void escape( char a[], char b[]){
  int i, j;
  for(i = 0, j = 0; b[i] != '\0';++i, ++j)
        switch(a[i]){
          case '\n':
          b[j++] = '\\';
          b[j] = 'n';
          break;
          case '\t':
          b[j++] = '\\';
          b[j] = 't';
          }
          break;
          default:
          b[j] = a[i];
          break;
        }
      }

//     printf("c = > %d\n");
//     printf("a[i] = > %s\n");
//       if(c == '\n'){
//         ++j;
//       }
//         c = j;
//         c = 'n';
//         a[++i] = c;
//
//       if(c == '\t'){
//         ++j;
//       }
//         c = j;
//         c = 't';
//         a[++i] = c;
//
//   }
// }
