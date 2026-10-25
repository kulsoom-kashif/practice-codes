/* ARRAY RESERVING ;
Write a c program that takes 5 integers and reverse it*/
#include <stdio.h>
int main(){
	int arr[5], i;
	
	printf("enter the values");
	
	for(i = 0; i <5 ; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("reversed array");
	
	for (i = 4; i>=0; i--){
		printf("%d ", arr[i]);
	}
	return 0;
}                                                              