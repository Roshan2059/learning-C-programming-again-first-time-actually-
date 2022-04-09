#include<stdio.h>

int main(){
	int p;
	float t, r, si;
	printf("Enter the principal amount:\n");
	scanf("%d", &p);
	printf("Enter the time:\n");
	scanf("%f", &t);
	printf("Enter the interest rate:\n");
	scanf("%f", &r);
	si = (p * t * r) / 100;
	printf("The simple interest according to the given values is: %.2f", si);
	printf("The simple interest according to the given values is: %.2f", si);
	return 0;
}
