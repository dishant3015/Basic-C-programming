#include <stdio.h>
#include <math.h>

int main(void) {

    double result = 0.0;
    double next_num;
    int choice;
    bool keep_running = true;
    bool is_first_run= true;

    printf("------------------------------------------------- \n");
    printf("CONTINUOUS SCIENTIFIC CALCULATOR \n");
    printf("------------------------------------------------- \n");

    while (keep_running)
    {

        if (is_first_run) {
            printf("Enter your first num : ");
            scanf("%lf", &result);
            is_first_run = false;
        }
        
        printf("--------------------------------------------- \n");
        printf("Answer : \n");
        printf("%.2f \n", result);
        printf("\n");
        printf("--------------------------------------------- \n");

        printf("The arithmetic opertors you can perform are : \n"
            "1. Addition \n"
            "2. Subtracton \n"
            "3. Multiplication \n"
            "4. Division \n"
            "5. Modulo \n"
            "6. Natural log \n"
            "7. Log (number 2 base) \n"
            "8. Exponent to 2 \n"
            "9. Exponent to n number \n"
            "10. Factorial \n");

        printf("--------------------------------------------- \n");
        printf("Enter 888 for clearing the current answer. \n"
                "Enter 999 for exiting the calculator. \n");
        printf("--------------------------------------------- \n");
        printf("\n");
        printf("Enter your choice from the following list : ");
        scanf("%i", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            printf("Enter number : ");
            scanf("%lf", &next_num);
            result += next_num;
            break;
        
        case 2:
            printf("Enter number : ");
            scanf("%lf", &next_num);
            result -= next_num;
            break;

        case 3:
            printf("Enter number : ");
            scanf("%lf", &next_num);
            result = result * next_num;
            break;

        case 4:
            printf("Enter number : ");
            scanf("%lf", &next_num);
            if (next_num != 0) {
                result /= next_num;
            }
            else {
                printf("Number invalid. \n");
            }
            break;

        case 5: 
            printf("Enter number : ");
            scanf("%lf", &next_num);
            if (next_num != 0) {
                result = fmod(result, next_num);
            }
            else {
                printf("Invalid number. \n");
            }
            break;

        case 6 :
            result = log(result);
            break;

        case 7:
            printf("Enter number : ");
            scanf("%lf", &next_num);
            result = log(result) / log(next_num);
            break;

        case 8:
            result = pow(result, 2);
            break;

        case 9:
            printf("Enter number : ");
            scanf("%lf", &next_num);
            result = pow(result, next_num);
            break;

        case 10:
            if (result < 0 ){
                printf("Invalid number. \n");
            } 
            else {
                int n = (int)result;
                double x = 1.0;
                for (int i = 1; i <= n; i++) {
                    x *= i;
                }

                result = x;
                break;
            }

        case 888:
            is_first_run = true;
            result = 0.0;
            break;

        case 999:
            keep_running = false;
            break;
        
        default:
        printf("Pick a valid choice! \n");
            break;
        }

    }

    return 0;
}
