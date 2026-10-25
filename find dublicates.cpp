#include <stdio.h>
int main(){
	int arr[6], i, j;
	
	printf("enter the values");
	
	for(i = 0; i <6 ; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("duplicate values :\n");
	
	for (i = 0; i< 6; i++){
		for (j=i+1; j<6; j++){
			if (arr[i]==arr[j]){
				printf("%d ", arr[i]);
			}		}
	}
	return 0;
}      