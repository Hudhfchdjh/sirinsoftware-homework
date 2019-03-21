#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAXLEN
double atog (char s[])
{
	double val, power, inspak, bot, bisik;
	int i, sign, desik;
	for (i = 0; isspace (s[i]); i++);
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
	i++;
	for (val = 0.0; isdigit (s[i]); i++)
	val = 10.0 * val + (s[i] - '0');
	if (s[i] =='.')
	i++;
	for (power = 1.0; isdigit(s[i]); i++) {
	val = 10.0 * val + (s[i] - '0');
	power *= 10.0;
}
	if(s[i] == 'e' || s[i] == 'E')
	i++;
	desik = (s[i] == '-') ? -1 : 1;
	i++;
	if (s[i] == '+' || s[i] == '-')
	i++;
	for(inspak = 0.0; isdigit(s[i]); i++)
	inspak = 10.0 * inspak + (s[i] - '0');
	bisik = pow(10.0, inspak);
	bot = sign * val / power;
	if(desik == 1)
	return bot * bisik;
	else
		return bot / bisik;
}
int main()
  {
      char start_with_plus[MAXLEN] = "  -10.325e-6\0";
      char start_with_minus[MAXLEN] = "  -10.325e+6\0";

      printf("start_with_plus = %s\n", start_with_plus);
      printf("END = %f\n\n", atog(start_with_plus));

      printf("start_with_minus = %s\n", start_with_minus);
      printf("END = %f\n", atog(start_with_minus));

      return 0;
  }
