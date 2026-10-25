#include <stdio.h>
int main(){
	int num, count = 0 , i;
	
	printf("ENTER NUMBER: ");
	scanf("%d", &num );
	
	for (i = 1; i<=num ; i++){
		if (num % i ==0 ){
			count++;
		}
	}
		if (count == 2){
			printf("prime");
		} 
		else{
			printf("not prime");
		}
		

	return 0;
}