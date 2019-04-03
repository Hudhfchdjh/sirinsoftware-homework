#include "stdio.h"

void reverse(char arg, char newe_arg)
{
    int i, j = 0, k;
    for (i = 0; arg[i] != '\0'; ++i);
    k = i;
    while (newe_arg[j++] = arg[i-1], j != k, i--) {
        if (j == k) {
            newe_arg[j++] = '\0';
            printf("newe_arg => %s\n", newe_arg);
        }
    }

}
int main()
{
    char str_symbols[] = "ABCDE";
    char nw_str_symbols[10];
    reverse(str_symbols, nw_str_symbols);
}
