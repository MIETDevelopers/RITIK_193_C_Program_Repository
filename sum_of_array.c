#include<stdio.h>

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int i, sum=0;
	for (i=0; i<10; i++){
		sum+=arr[i];
	}
	printf("sum of all elements in array = %d", sum);
	return(0);

}