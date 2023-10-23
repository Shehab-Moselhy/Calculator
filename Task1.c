
#include <stdio.h>

int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);

int main(void) {
    char operator, choice;
    int num1, num2;

    printf("------------------------------------------------------------------------------------------\n");
    printf("*****************************Welcome to calculator****************************************\n");
    printf("------------------------------------------------------------------------------------------\n");

    while (1) 
    {

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n') 
        {
            break;
        } 
        else 
        {
            printf("Enter the operand1: ");
            scanf("%d", &num1);
            printf("Enter the operand2: ");
            scanf("%d", &num2);

            printf("Enter the calculation operator (+, -, *, /): ");
            scanf(" %c", &operator);

            switch (operator) 
            {
                case '+':
                    printf("The sum of %d + %d = %d\n", num1, num2, addition(num1, num2));
                    break;
                case '-':
                    printf("The difference of %d - %d = %d\n", num1, num2, subtraction(num1, num2));
                    break;
                case '*':
                    printf("The product of %d * %d = %d\n", num1, num2, multiplication(num1, num2));
                    break;
                case '/':
                    if (num2 != 0) {
                        printf("The division of %d / %d = %d\n", num1, num2, division(num1, num2));
                    } 
                    else 
                    {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                    break;
                default:
                    printf("Invalid operator. Please use +, -, *, or /.\n");
                    break;
            }
            printf("-----------------------------------\n");
        }
    }
    return 0;
}

int addition(int num1, int num2) 
{
    return num1 + num2;
}

int subtraction(int num1, int num2) 
{
    return num1 - num2;
}

int multiplication(int num1, int num2) 
{
    return num1 * num2;
}

int division(int num1, int num2) 
{
    return num1 / num2;
}
