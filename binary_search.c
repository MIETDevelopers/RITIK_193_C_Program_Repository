// Purpose Of The Program:Binary Search
#include <stdio.h>
void binarySearch(); 
int arr[50], n, num, start, mid, end; //Integer variable declaration
void main()
{
    //Printf and Scanf function calling to take input for size of the array
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    //For loop to take n inputs
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &num); //For reading the number to be searched
    binarySearch();
}
void binarySearch()
{
    //For finding the entered number in the array
    start = 0;
    end = n-1;
    mid = (start + end)/2;
    while ((start<=end) && (arr[mid]!=num))
    {
        if (num < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
        mid = (start + end) / 2;
    }
    if (arr[mid] == num)
        printf("\nNumber %d found at index [%d] in the array!", num, mid+1); //For printing the location of the searched number
    else
        printf("\nNumber doesn't exist!"); 
}