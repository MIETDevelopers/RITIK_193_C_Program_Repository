#include<stdio.h>  // header file
int main(){  // main function body
  int *arr[5]={5,6,7,8,9,};
  for(int i=0; i<5; ++i){
  	printf("%d\n", *(arr+i));
  }
  
  
  return(0);
}  // end of main function body
