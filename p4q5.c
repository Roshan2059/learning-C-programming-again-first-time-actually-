#include<stdio.h>

int main(){
	int i, sum = 0;
	i = 1;
	while(i <= 10){
		sum = sum + i;
		i++;
	}
	printf("The sum of first ten natural numbers is %d", sum);
}
