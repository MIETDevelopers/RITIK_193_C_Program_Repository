#include<stdio.h>  // header file

// function to find largest among three number
float large(float a, float b, float c)
{
   if(a>=b && a>=c) return a;
   else if(b>=a && b>=c) return b;
   else return c;
}

int main(){  // main function body
   float num1, num2, num3, largest;  // declaration of variables

   printf("Enter three numbers: ");
   scanf("%f %f %f", &num1, &num2, &num3);  // read numbers from user

   largest = large(num1, num2, num3);
   printf("Largest number = %.2f",largest);
   return 0;
}  // end of main function body