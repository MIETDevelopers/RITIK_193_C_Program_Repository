// A C Program to check whether the entered number is Odd or Even.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); //It will take the numbers as input, entered by user.
    if(num % 2 == 0)//this if statement will work if num enter by user leaves reminder 0 after dividing by 2
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}