#include<stdio.h>

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int i;
	for (i=0;i<10;i++){
		printf("values of array element  %d=%d \n", (i+1), arr[i]);
	}
	return(0);
}

