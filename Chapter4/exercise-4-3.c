/*Добавьте команды, с помощью которых можно было бы печатать верхний элемент стека (с
сохранением его в стеке),
 дублировать его в стеке, менять местами два верхних элемента стека. Введите
команду очистки стека.*/
#include <stdio.h>
#include <stdlib.h> /* ??? atof() */
#include <math.h>
#include <ctype.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100

int getch(void);
void ungetch(int);
int getop (char []);
void push (double);
double pop (void);

int bob = 0;
double hop = 0;
double val[MAXVAL];

int main()
{
    int type;
    double op2;
    double op1;
    char s[MAXOP];

    while ((type = getop (s)) != EOF) {
        switch (type) {
        case NUMBER:
            push (atof(s));
		printf("atof[s] = %s\n" ,s);
            break;
        case '%':
        	op1 = pop();
		//printf("op1 = %f\n",op2);
        	if(op2 != 0.0){
        	op2 = pop();
		//printf("op2 = %f\n" ,op2);
        	push (op1 - op2 * floor(op1 / op2));
        }
        	else
        		printf("íà íóëü äåëèòü íåëüçÿ èäè íàõóé\n");
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
                printf("??????: ??????? ?? ????\n");
            break;
        // case '%':
        //     op2 = pop();
        //     if (op2 != 0.0) {
        //         op1 = pop();
        //         push ( op1 - op2 * floor(op1 / op2) );
        //     }
            // else
            //   printf("?????: ?????????\n");
            // break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("??????: ??????????? ???????? %s\n", s);
            break;
        }
	}
    return 0;
}
int sp = 0;
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("??????: ???? ?????, %g ?? ??????????\n", f);
}

double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf ("??????: ???? ????\n");
	    return 0.0;
    }
}

int getop(char s[])
{
  //   int i = 0, c, f;
  //   while ((s[0] = c = getch()) == ' ' || c == '\t') ;
  //   printf("getop(): c=%c\n" ,c);
  //   s[1] = '\0';
  //   if (!isdigit(c) && c != '.'){
  //   	if(c == '-'){
  //   		if(isdigit(f = getch())){
	// 		printf("int f = %d\n" ,f);
  //   			s[++i] = f;
	// 		printf("s[i] = %d\n" ,s[i]);
  //   		}
  //   			else{
  //   				ungetch(f);
  //   				return c;
	// 				}
	// 	}
	// }
 int i = 0, c, t;
      while ((s[i] = c = getch()) == ' ' || c == '\t');
      if (!isdigit(c) && c != '.') {
          if (c == '-') {
              if (isdigit(t = getch()) || t == '.') {
                  s[++i] = t;
              }
              else {
                  ungetch(t);
                  return c;
              }
          }
          else {
              return c;
          }
      }
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()));
    if (c =='.')
        while (isdigit(s[++i] = c = getch()));
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

/*берет фозвращенный символ в*/
#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE){
        printf("ungetch: ??????? ????? ????????\n");
	}
    else{
        buf[bufp++] = c;
	printf("buf[bufp] =%d\n" ,buf[bufp]);
	}
}
