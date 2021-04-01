// C program to illustrate do-while loop
  
#include <stdio.h>
  
int main()
{
    // Initialization expression
    int i = 2;
  
    do {
        // loop body
        printf("Hello World\n");
  
        // Update expression
        i++;
    }
    // Test expression
    while (i < 5);
  
    return 0;
}