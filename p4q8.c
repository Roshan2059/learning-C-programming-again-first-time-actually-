#include<stdio.h>

int main(){
	int i, n, mul;
	
	printf("Enter the number to find the factorial of\n");
	scanf("%d", &n);
	
	for(i = 1; i <= n ; i++){
		mul = mul * i;
	}
	
	printf("The factorial is %d", mul);
}
//#include<stdio.h>
//
//int main(){
//	int i, n, fact;
//	
//	printf("Enter the number to find the factorial of\n");
//	scanf("%d", &n);
//	
//	for(i = 1; i <= n ; i++){
//		fact = fact * i;
//	}
//	
//	printf("The factorial is %d", fact);
//	return 0;
//}
