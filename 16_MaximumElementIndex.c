#include<stdio.h>
int main(){
  int i,limit;
  float arr[i];

  printf("Please enter limit:\n ");
  scanf("%d", &limit);

  for (i = 0; i < limit; ++i)
  {
    scanf("%f", &arr[i]);
  }

    for (i = 1; i < limit; ++i)
    {
      if (arr[0] < arr[i])
          arr[0] = arr[i];
    }
  printf("Largest element = %.2f", arr[0]);
  printf("largest index =%d", limit);
  return 0;
}