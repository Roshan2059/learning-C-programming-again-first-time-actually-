#include<stdio.h>

int main(){
	int n, i = 0;
	
	printf("Enter the number upto which you want to print the natural numbers\n");
	scanf("%d", &n);
	
	do{
		if(i >= 1){
			printf("%d\n",i);
		}
			i++;
		
	}
	while(i <= n);
}
