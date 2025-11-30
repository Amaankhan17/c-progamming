#include<stdio.h>

int main()
{
    /* 
    Name: Amaan Khan
    UIN: 251P045
    Roll No: 41
    Division: C
    Class: Comps
    */
    
    int num1, num2, result;
    char op, option;

    repeat:
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    printf("You have the following operations to choose from: \n");
    printf("Addition (+) \n");
    printf("Subtraction (-) \n");
    printf("Multiplication (*) \n");
    printf("Division (/) \n");
    printf("Modulus (%%) \n");
    printf("Choose your preferred operation: ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
        result = num1 + num2;
        printf("%d + %d = %d", num1, num2, result);
        break;
        case '-':
        result = num1 - num2;
        printf("%d - %d = %d", num1, num2, result);
        break;
        case '*':
        result = num1 * num2;
        printf("%d * %d = %d", num1, num2, result);
        break;
        case '/':
        result = num1 / num2;
        printf("%d / %d = %d", num1, num2, result);
        break;
        case '%':
        result = num1 % num2;
        printf("%d %% %d = %d", num1, num2, result);
        break;
        default:
        printf("Invalid Operator Used.\n Try Again");
        break;
    }
    printf("\n Do you want to continue? \n (Y/N)");
    scanf(" %c", &option);

    if (option == 'N'|| option =='n')
    {
        printf("Thank you for using the claculator=)");
        return 0;
    }
    else 
    {
        printf("\n");
        goto repeat;
    }

}