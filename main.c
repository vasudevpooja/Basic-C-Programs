#include <stdio.h>
int main()
{
    char operator;
    double n1, n2;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);
    switch (operator)
    {
    case '+':
        printf("The sum is:");
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
        break;
    case '-':
        printf("The difference is:");
        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
        break;
    case '*':
        printf("The product is:");
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
        break;
    case '/':
        printf("The sum is:");
        printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
        break;
    default:
        printf("Incorrect operator.");
    }

    return 0;
}
