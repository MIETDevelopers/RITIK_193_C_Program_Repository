#include <stdio.h>
#include <conio.h>

int main()
{
  int limit,num,count,big;

  //It will set the maximum number (Limit) of values to be entered by user based on their choice.
  printf("enter the limit\n ");
  scanf("%d",&limit); 
  
  for(count=1; count<=limit; count++)
  {
    //It will scan the numbers entered by user upto the limit setted by user.
    scanf("%d",&num);
    if(num>big || count==1)
    big=num;
  }

  printf("\nThe biggest number is %d",big); //It will give the largest number as the output.
  

  return 0;
}
