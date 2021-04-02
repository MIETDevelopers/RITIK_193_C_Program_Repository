// Purpose Of The Program:Function implementation which return a structure
#include <stdio.h>  //Pre-process directive to include standard input and output functions header file
struct student
{
    char name[50];
    int age;
};

// function prototype
struct student getInformation();

int main()
{
    struct student s;

    s = getInformation();

    printf("\nDisplaying information\n"); //Printf function calling
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);
   
    return 0;
}
struct student getInformation()
{
  struct student s1;

  printf("Enter name: ");
  scanf ("%[^\n]%*c", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);
 
  return s1;
}