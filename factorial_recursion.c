// Purpose Of The Program:Factorial using recursion.
#include<stdio.h>  // preprocessor directive to include header file having standard input and output functions
long int multiplyNumbers(int n);  // Doubt in this program.
int main() { // Start of Body 
    int n; // Variable  Declaration
    printf("Enter a positive integer: "); // taking Input
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n)); // Printing Output 
    return 0;
}

long int multiplyNumbers(int n) { 
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}