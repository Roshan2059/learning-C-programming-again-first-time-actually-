#include<stdio.h>

int main(){
	int i;
	
	for(i = 1; i <= 10; i++){
		printf("The number is %d\n", i);
		if(i == 5){
			break;
		}
	}
	return 0;
}