#include <stdio.h>
void displayNumbers(int num[2][2]);
int main()
{
    int num[2][2],
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j){
            scanf("%d", &num[i][j]);
        }
        int num1[5]={1,2,3,4,5};
    // passing multi-dimensional array to a function
    displayNumbers(num[2][2], num1[5]);
    return 0;
}

void displayNumbers(int output[2][2], output1[5])
{
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           printf("%d\n", output[i][j]);
        }
        for (int j=0; j<5; j++){
            printf("%d\n", output1[j]);
        }
    }
}
