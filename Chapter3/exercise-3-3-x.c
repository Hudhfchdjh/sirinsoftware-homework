/*Напишите функцию expand(s1, s2), заменяющую сокращенную запись наподобие a-z в
строке s1 эквивалентной полной записью abc. . . xyz в s2. В s1 допускаются буквы (прописные и строчные) и
цифры. Следует уметь справляться с такими случаями, как a-b-c, a-z0-9 и -а-b. Считайте знак - в начале или в
конце s1 обычным символом минус.*/

#include <stdio.h>
#include <ctype.h>

#define MOD 10

void expans(char s1[], char s2[])
{
	int i, j;
	char t;

	for (i = 0, j = 0; s1[i] != '\0'; i++)
     {
         if ( s1[i] == '-' )
         {
             if ( (isdigit(s1[i-1]) && isdigit(s1[i+1]) && (s1[i-1]<s1[i+1])) ||
                  (islower(s1[i-1]) && islower(s1[i+1]) && (s1[i-1]<s1[i+1])) ||
                  (isupper(s1[i-1]) && isupper(s1[i+1]) && (s1[i-1]<s1[i+1])) )
                     for (t = (char)(s1[i-1]+1); t < s1[i+1]; t++){
                    	 printf("t => %d\n" ,t);
                         s2[j++] = t;
                     }
             else
                 s2[j++] = s1[i];
         }
         else
             s2[j++] = s1[i];
     }
     s2[j] = '\0';
 }
int main(){
	char string1[MOD] = "a-b-c-d0-9";
	char string2[MOD];
	printf("START = %s\n" ,string1);
	expans(string1, string2);
	printf("END = %s\n" ,string2);
	return 0;
}
