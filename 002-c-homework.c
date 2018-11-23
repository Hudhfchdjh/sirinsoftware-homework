/* as i undertood our, me need was copy this cod and put together it ,and too to explain that typed*/
#include <stdio.h>
int main() /* difinition function */
{   
 
    int number;
    printf("Enter an integer: ");  /* output text */
    scanf("%d", &number);  /* input text in stream input */
    if (number <= 0.0)
    {
        if (number == 0.0) /*assessment value variables */
            printf("Sorry-0.");/* output text */
        else /*operator assessment other option*/
            printf("You entered a negative number.");/* output text */
    }
    else /*operator assessment other option*/
        printf("You entered a positive number.");/* output text */
    printf("Enter a positive integer: ");
    int sum;
    scanf("%d", &sum);
    for(number <= sum; ++number)
    {
        sum += number;
    }
    printf("Sum = %d", sum);
    }

