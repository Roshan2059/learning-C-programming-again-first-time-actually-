#include<stdio.h>

int main(){
	int result;
	int a, b, c;
	printf("Enter the three numbers of which you want to find the average of\n");
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%d", &c);
	result = ave(a, b, c);
	printf("The average of the three numbers is %d", result);
	return 0;
}

int ave(int a, int b, int c){
	int average;
	average = (a + b + c) / 3;
	return average;
}
