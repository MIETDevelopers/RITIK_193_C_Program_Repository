//author: Ritik kotwal
//creation date: 18/3/21
//purpose of program: use of arithmetic operation

#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); //It will print the operator to be entered by user.
    scanf("%c", &operator); //It will take type of operator from user.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //It will take(input) two operands from  user.
    switch(operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition of operands using printf Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction of operands using printf Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication of operands using printf Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division of operands using printf Function
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}
