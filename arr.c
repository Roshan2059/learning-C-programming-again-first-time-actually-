#include<stdio.h>
int main(){
	int num[5], i;
	printf("Enter any five numbers:\n");
	for(i = 0; i <= 4; i++){
		scanf("%d", &num[i]);
	}
	printf("In the actual order:\n");
	for(i = 0;i<=4;i++){
		printf("%d  ", num[i]);
	}
	printf("\nIn the reverse order:\n");
	for(i = 4;i>=0;i--){
		printf("%d  ",num[i]);
	}
}
