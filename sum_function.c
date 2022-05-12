#include<stdio.h>

int main(){
	int c;
	c = add(213, 200);
	printf("The result is %d", c);
	return 0;
}

int add(int a, int b){
	int result;
	result = a + b;
	return result;
}
