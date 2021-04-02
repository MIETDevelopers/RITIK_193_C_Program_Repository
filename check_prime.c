#include<stdio.h>  // Header File
int check_prime(int);  // declaration of function
 int main(){   // main function body
   int n, result;   // declaration of variables of data type int
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);  // read number from user
 
   result = check_prime(n);   // function calling
 
   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);
 
   return 0;
}
 
int check_prime(int a){   // function definition
   int c;   // declaration of variable
    for ( c = 2 ; c <= a - 1 ; c++ )  // using for loop
   { 
      if ( a%c == 0 )    // if condition
     return 0;
   }
   return 1;
}