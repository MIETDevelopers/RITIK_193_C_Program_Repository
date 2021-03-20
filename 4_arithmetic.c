#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); 
    scanf("%c", &operator); //It will take  operator as input entered by user.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //It will take the numbers as entered by user.
    switch(operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division Function
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}