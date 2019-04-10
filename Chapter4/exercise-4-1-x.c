/*Напишите функцию strindex(s, t), которая выдает позицию самого правого вхождения
t в s или -1, если вхождения не обнаружено.*/

#include <stdio.h>

#define MAXLINE 1000 /* максимальный размер вводимой строки */

char pattern[] = "ould"; /* образец для поиска */

/* getline: читает строку в s, возвращает длину */
int getl(char s[], int lim)
{
	int c, i;
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n' )
		s[i++] = c;
	if (c == '\n')
			s[i++] = c;
		s[i] = '\0';
		return i;
}
/* strindex: вычисляет место t в s или выдает -1, если t нет в s */
int strindex (char s[], char t[])
{
	{
		{
	int i, j, k;
	for (i = 0; s[i] != '\0'; i++) {
	for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
		;
	if (k > 0 && t[k] == '\0')
	return i;
	}
	return -1;
}

/* найти все строки, содержащие образец */
int main()
{
	char line[MAXLINE];
	while (getl(line, MAXLINE) > 0)
		if (printf("c => %d\n", strindex(line, pattern)) >= 0) {
			printf ("%s", line);
		}
}
