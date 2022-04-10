#include<stdio.h>

int main(){
	int guess, actual, i;
	srand(time(0));
	actual = rand() % 100 + 1;
	
	for(i = guess; guess != actual; i++){
	printf("Enter a number between 1 to  100:\n");
	scanf("%d", &guess);
		if(guess > actual){
		printf("Number you entered is higher\n");
	}
	else if(guess < actual){
		printf("Number you entered is lower\n");
	}
	else{
		printf("Correct number\n");
	}
	}
	printf("You made it in %d attempts", i);
}
