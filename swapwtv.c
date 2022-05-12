#include<stdio.h>

int main(){
	int a,b;
	scanf("%d\n", &a);
	scanf("%d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a is %d\n", a);
	printf("b is %d", b);
	return 0;
}
