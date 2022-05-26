#include<stdio.h>
int main(){
	int c, d, e, f;
	getValue(c, d);
	printf("\nThe sum is: %d", add(c, d));
	return 0;
}

int add(int e, int f){
	return e + f;
}

int getValue(int c, int d){
	printf("Enter the first number:\n");
	scanf("%d", &c);
	printf("Enter the first number:\n");
	scanf("%d", &d);
	return c,d;
}
