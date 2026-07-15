#include <stdio.h>

int main(void) {

    int num;
    int sum = 0; // initiallizing the sum.
    printf("Enter a number having more than one digit : \n");
    scanf("%i", &num);

    int og_num = num; // For print it in result line later on.

    while (num != 0) // making sure the loop does not start when user inputs the number 0.
    {
        int digits = num % 10;
        sum = sum + digits; // Don't get confused here, sum initialy is 0, to update it's values, we add the extracted digit in loop
        num /= 10; // This stops the loop when there are no more digits to extract. 
    }
    
    printf("The sum of the digits of %i is %i\n", og_num, sum);

    return 0;

}