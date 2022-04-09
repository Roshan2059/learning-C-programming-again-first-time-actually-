#include<stdio.h>
int main(){
	int income;
	float inctax;
	
	printf("Enter your income:\nRS.");
	scanf("%d", &income);
	
	if(income < 250000){
		printf("You do not have to pay income tax to the government.");
	}
	else if(income >= 250000 && income <= 500000 ){
		printf("You have to pay RS.%.2f as income tax to the government.", inctax = (income * 0.05));
	}
	else if(income >=500000 && income <= 1000000){
		printf("You have to pay RS.%.2f as income tax to the government.", inctax = (income * 0.2));
	}
	else{
		printf("You have to pay RS.%.2f as income tax to the government.", inctax = (income * 0.3));
	}
}
