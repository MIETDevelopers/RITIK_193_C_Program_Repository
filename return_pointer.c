// Purpose Of The Program:Returning Pointer From Function
#include <stdio.h>
 
// Function that returns pointer
int* fun()
{
    // Declare a static integer
    static int A = 10;
    return (&A);
}
 
// Driver Code
int main()
{
    // Declare a pointer
    int* p;
 
    // Function call
    p = fun();
 
    // Print Address
    printf("%p\n", p);
 
    // Print value at the above address
    printf("%d\n", *p);
    return 0;
}    