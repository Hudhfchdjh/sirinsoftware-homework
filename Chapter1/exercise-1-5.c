#include <stdio.h>
int main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 300;
	upper = 0;
	step = 20;
	celsius = lower;
	while (upper <= celsius) {
		fahr = celsius * (9/5) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius - step;
	}
}
