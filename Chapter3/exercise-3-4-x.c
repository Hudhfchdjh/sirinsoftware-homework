#include <stdio.h>
#include <limits.h>
#include <string.h>


void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int resign_int_min(int n)
{
	int c = 0;
	n -= 1;
	c = n + 1;
	return c;
}

void itoa (int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0) {
        n = -n;
    }
    if (sign == INT_MIN) {
       n = resign_int_min(n);
    }

    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

int main()
{
//     char stack[10];
     char new_stack[10];
     int stk_numb = INT_MIN;
//     itoa(stk_numb, stack);
//     printf("stack no INT_MIN => %s\n", stack);
     itoa(stk_numb, new_stack);
     printf("chtoto no INT_MAX => %s\n", new_stack);

}
