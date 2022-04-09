#include<stdio.h>

//with hard coded input
//int main(){
//	int l=5, b=4;
//	printf("The area of reactangle is %d", l * b);
//}

//with input given by the user
int main(){
	int l, b, area;
	printf("Enter the length of the rectangle:\n");
	scanf("%d", &l);
	printf("Enter the breadth of the rectangle:\n");
	scanf("%d", &b);
	area = l * b;
	printf("The area of the rectangle who length is %d and breadth is %d is: %d", l, b, area);
}
