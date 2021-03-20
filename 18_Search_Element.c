// A C Program to search an element in the array based on user choice.     
#include <stdio.h>
void main(){  //In this program we are not using 'return 0', So 'int main() -> void main()'.
    int num;
    int i,  keynum, found = 0;
 
    printf("Enter the number of elements: \n");
    scanf("%d", &num);//This will set the maximum number (Limit) of values to be entered by user based on their choice.
    int array[num];
    printf("Enter the elements one by one: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]); //This will scan the user input.
    }
 
    printf("Enter the element to be searched: ");
    scanf("%d", &keynum);
    // This step will determine Linear search.
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    //This will give the output based on user input.
    if (found == 1) {
        printf("Element is present in the array at position %d \n.",i+1);
        printf("element is= %d", array[i]);
        }
    else
        printf("Element is not present in the array.\n");
}