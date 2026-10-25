#include <stdio.h>

int main(){
	int num, reserve = 0, digit, original;
	
	printf("enter the number: ");
	scanf("%d", &num);
	original = num;
	
	while(num!=0){
		digit = num %10;
		reserve = reserve*10 + digit;
		num = num/10 ; 
	}
	if (original == reserve){
		printf("palindrome number : %d", reserve);
	}
	else {
		printf("not palindrome :%d", reserve);
	}
	
	return 0;
}