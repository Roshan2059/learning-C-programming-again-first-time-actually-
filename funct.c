#include<stdio.h>
int add(int, int);
int main(){
	add(10,30);
}
int add(int a, int b){
	int sum = a + b;
	printf("The result is: %d", sum);
}
