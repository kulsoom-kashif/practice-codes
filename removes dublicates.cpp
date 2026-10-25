#include <stdio.h>
int main(){
	int arr[10], n, i, j, k;
	
	printf("enter number of elements ; ");
	scanf("%d ", &n);
	
	printf("enter the elements :");
	
	for (i = 0; i<n; i++){
	
		    scanf("%d ", &arr[i]);
}
	for (j = i+1; j<n; j++){


		if (arr[i]==arr[j]){
			
				for (k=j; k<n-1; k++){
					arr[k]=arr[k+1];
				}
				
				n--;
				j--;
			}
		}
}
	
	printf("array after removing dublicates ");
	
	for (i = 0; i<n ; arr[i]){
		printf("%d ", arr[i]);
	}

	return 0;
}      