#include <stdio.h>

int main(void) {

    int a;
    int b;
    int choice;
    int result;

    printf("Enter your 1st number : ");
    scanf("%i", &a);
    printf("\n");
    printf("Enter your 2nd number : ");
    scanf("%i", &b);
    printf("\n");

    printf("The arithmetic opertors you can perform are : \n1. Addition \n2. Subtracton \n3. Multiplication \n4. Division \n5. Modulo \n");
    printf("Enter your choice from the following list : ");
    scanf("%i", &choice);
    printf("\n");

    switch (choice)
    {
    case 1:
        result = a + b;
        printf("The answer of your addition is : %i \n", result);
        break;
    case 2:
        result = a - b;
        printf("The answer of your subtraction is : %i \n", result);
        break;
    case 3:
        result = a * b;
        printf("The answer of your multiplication is : %i \n", result);
        break;
    case 4:
        if (b != 0) {
            result = a / b;
            printf("The result of your division is : %i \n", result);
        }
        else {
            printf("Second number invalid! \n");
        }
        break;
    case 5:
        if (b != 0) {
            result = a % b;
            printf("The result of your modulo is : %i \n", result);
        }
        else {
            printf("Second number invalid! \n");
        }
    
    default:
    printf("Pick a valid choice! \n");
        break;
    }
    


    return 0;
}