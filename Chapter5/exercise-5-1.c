#include <ctype.h>
#include <stdio.h>
#define BUFSIZE 100
#define BOLD 50
int getint (int *);
void ungetch(int c);
int getch(void);

char buf[BUFSIZE];    /* Р±СѓС„РµСЂ РґР»СЏ ungetch */
int bufp = 0;

int main(){
  int n;
  int array[BOLD];
  //getint (int *);
  for (n = 0; n < BOLD && printf("getint(&array[n]) => %d\n" ,getint (&array[n])) != EOF; n++){
    // printf("&array[n] => %d\n" ,array[n]);
}
}

int web_sitate(int pot; char );

/* getint: читает следующее целое из ввода в *pn */
int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch())); /* пропуск символов-разделителей */

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); /* не число */
        return 0;
    }
    sign = (c =='-') ? -1 : 1;
    if (c == '+' || c == '-') {
        // stack_for_signs = c;
        c = getch();
       // stack_for_signs = c;
          // if(stack_for_signs - 1 == '0' && stack_for_signs + 1 == '0')
        // if (isigit(c) == 0) {
        //       ungetch(stack_for_signs);
        //       stack_for_signs = 0;
        }
}
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);

    return c;
}
  int getch(void)       /* РІР·СЏС‚СЊ (РІРѕР·РјРѕР¶РЅРѕ РІРѕР·РІСЂР°С‰РµРЅРЅС‹Р№) СЃРёРјРІРѕР» */
  {
      return (bufp > 0) ? buf[--bufp] : getchar();
    }
  void ungetch(int c)   /* РІРµСЂРЅСѓС‚СЊ СЃРёРјРІРѕР» РЅР° РІРІРѕРґ */
  {
      if (bufp >= BUFSIZE)
          printf("ungetch: СЃР»РёС€РєРѕРј РјРЅРѕРіРѕ СЃРёРјРІРѕР»РѕРІ\n");
      else
          buf[bufp++] = c;
  }
