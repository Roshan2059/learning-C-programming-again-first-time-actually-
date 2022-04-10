#include<stdio.h>

int main(){
	int i, n;
	printf("Program to print n natural numbers.\n");
	scanf("%d", &n);
	
	for(i = n; i >= 1; i--){
		printf("The number is %d\n", i);
	}
	return 0;
}
