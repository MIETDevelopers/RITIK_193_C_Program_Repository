#include<stdio.h>  // header file
int main(){  // main function body
  int num=5;
  int *ptr = &num;  // declaration and initialisation of pointer
  
  printf("%d\n", ptr);  // printing value of address of variable
  printf("%d\n", *ptr);  //printing value of variable 

  return(0);
}  // end of main function body
