#include<stdio.h>

int main(){
	int i, n, fact = 1;
	
	printf("Enter the number to find the factorial of:\n");
	scanf("%d", &n);
	i = n;
	while(i >= 1){
		fact = fact * i;
		i--;
	}
	printf("The desired factorial is %d", fact);
}
