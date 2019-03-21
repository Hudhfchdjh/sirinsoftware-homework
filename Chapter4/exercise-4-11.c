#include <stdio.h>
#include <stdlib.h> /* РґР»СЏ atof() */

#define MAXOP 100  /* РјР°РєСЃ. СЂР°Р·РјРµСЂ РѕРїРµСЂР°РЅРґР° РёР»Рё РѕРїРµСЂР°С‚РѕСЂР° */
#define NUMBER '0' /* РїСЂРёР·РЅР°Рє С‡РёСЃР»Р° */

int getop (char []);
void push (double);
double pop (void);

/* РєР°Р»СЊРєСѓР»СЏС‚РѕСЂ СЃ РѕР±СЂР°С‚РЅРѕР№ РїРѕР»СЊСЃРєРѕР№ Р·Р°РїРёСЃСЊСЋ */
int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop (s)) != EOF) {
        switch (type) {
        case NUMBER:
            push (atof(s));
            break;
        case '+':
            push (pop() + pop());
            break;
        case '*':
            push (pop() * pop());
            break;
        case '-':
            op2 = pop();
            push (pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push (pop() / op2);
            else
            op2 = pop();
                printf("РѕС€РёР±РєР°: РґРµР»РµРЅРёРµ РЅР° РЅСѓР»СЊ\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("Sorry anything untrue( %s\n", s);
            break;
        }
    }

    return 0;
}


#define MAXVAL 100  /* РјР°РєСЃРёРјР°Р»СЊРЅР°СЏ РіР»СѓР±РёРЅР° СЃС‚РµРєР° */

int sp = 0;         /* СЃР»РµРґСѓСЋС‰Р°СЏ СЃРІРѕР±РѕРґРЅР°СЏ РїРѕР·РёС†РёСЏ РІ СЃС‚РµРєРµ */
double val[MAXVAL]; /* СЃС‚РµРє */
int j;
/* push: РїРѕР»РѕР¶РёС‚СЊ Р·РЅР°С‡РµРЅРёРµ f РІ СЃС‚РµРє */
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("РѕС€РёР±РєР°: СЃС‚РµРє РїРѕР»РѕРЅ, %g РЅРµ РїРѕРјРµС‰Р°РµС‚СЃСЏ\n", f);
}

/* pop: РІР·СЏС‚СЊ СЃ РІРµСЂС€РёРЅС‹ СЃС‚РµРєР° Рё РІС‹РґР°С‚СЊ РІ РєР°С‡РµСЃС‚РІРµ СЂРµР·СѓР»СЊС‚Р°С‚Р° */
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf ("Do you want will set nothing?\n");
    return 0.0;
    }
}

#include <ctype.h>

int getch(void);

/* getop: РїРѕР»СѓС‡Р°РµС‚ СЃР»РµРґСѓСЋС‰РёР№ РѕРїРµСЂР°С‚РѕСЂ РёР»Рё РѕРїРµСЂР°РЅРґ */
int getop(char s[])
{
    //static char buf;
    static char operation = 0;
    int stack_for_values;
    int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    //printf("s[0] =%d\n",s[0]);
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;    /* РЅРµ С‡РёСЃР»Рѕ */
    i = 0;

    if(operation > 0){
      stack_for_values = operation;
      s[++i] = stack_for_values;
      operation = 0;
    }

    if (isdigit(c)){ /* РЅР°РєР°РїР»РёРІР°РµРј С†РµР»СѓСЋ С‡Р°СЃС‚СЊ */
        while (isdigit(s[++i] = c = getch()))
            ;
          }
        printf("c = %d\n",c);
    if (c =='.') /* РЅР°РєР°РїР»РёРІР°РµРј РґСЂРѕР±РЅСѓСЋ С‡Р°СЃС‚СЊ */
        while (isdigit(s[++i] = c = getch()));
    s[i] = '\0';
    // printf("This is c => %d\n" ,c);
    // printf("s[i] = > %d\n",s[i]);
    if (c != EOF){
      operation = c;
    }
    return NUMBER;
}


// #define BUFSIZE 100
//
// char buf[BUFSIZE];    /* Р±СѓС„РµСЂ РґР»СЏ ungetch */
// int bufp = 0;         /* СЃР»РµРґ. СЃРІРѕР±РѕРґРЅР°СЏ РїРѕР·РёС†РёСЏ РІ Р±СѓС„РµСЂРµ */

int getch(void)       /* РІР·СЏС‚СЊ (РІРѕР·РјРѕР¶РЅРѕ РІРѕР·РІСЂР°С‰РµРЅРЅС‹Р№) СЃРёРјРІРѕР» */
{
    //return (bufp > 0) ? buf[--bufp] : getchar();
    return getchar();
}

//void ungetch(int c)   /* РІРµСЂРЅСѓС‚СЊ СЃРёРјРІРѕР» РЅР° РІРІРѕРґ */
/*{
    if (bufp >= BUFSIZE)
        printf("ungetch: stack is full \n");
    else
        buf[bufp++] = c;
}*/
