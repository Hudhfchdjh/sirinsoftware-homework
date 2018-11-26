#include <stdio.h>

int main () {

   int  var = 20;   /* фактична декларація змінної */
   int  *ip;        /* декларація змінної покажчика */

   ip = &var;  /* зберегти адресу var у покажчиковій змінній*/

   printf("Address of var variable: %x\n", &var  );

   /* адреса зберігається в змінній покажчика */
   printf("Address stored in ip variable: %x\n", ip );

   /* отримати доступ до значення за допомогою покажчика */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
