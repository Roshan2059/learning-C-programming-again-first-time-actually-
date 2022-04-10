#include<stdio.h>

int main(){
	int i, a = 5;
	for(i = 1; i <= 10; i++){
		if(i == a){
			continue;
		}
		else{
			printf("%d\n", i);
		}
	}
}
