#include <stdio.h>
int main(){
	int num, sum = 0, original, digit; 

	printf("enter the number :");
	scanf("%d", &num);
	
	original = num;
	 while (num !=0){
	 	digit = num % 10;
	 	sum = sum + digit*digit*digit;
	 	num = num/10;
	 }
	
	if (original == sum){
		printf("armstrong");
	}
	else {
		printf("not armstrong");
	}

	
	return 0;
}