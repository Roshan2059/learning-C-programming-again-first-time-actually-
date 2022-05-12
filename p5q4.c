#include<stdio.h>

int main(){
	int n, result;
	printf("Enter n\n");
	scanf("%d", &n);
	result = calcFib(n);
	printf("The nth term of the fibonacii series is %d", result);
	return 0;
}

int calcFib(int n){
		if(n == 0){
			return 0;
		}
		else if(n == 1){
			return 1;
		}
		else{
			return calcFib(n - 1) + calcFib(n - 2);
		}
	}
