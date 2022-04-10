#include<stdio.h>
// a number that is divisible by itself and one.
int main(){
	int n, i, prime = 1;
	printf("Enter the number\n");
	scanf("%d", &n);
	for(i = 2; i < n; i++){
		if(n % i == 0){
			prime = 0;
			break;
		}
	}
	if(prime == 0){	
		printf("It is not a prime number.");
	}
	else{
		printf("It is a prime number.");
	}
}
