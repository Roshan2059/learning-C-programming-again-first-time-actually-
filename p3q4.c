#include<stdio.h>

int main(){
	int year;
	
	printf("Enter a year to check it's leapicity.");
	scanf("%d", &year);
	
	if(((year % 4) == 0 && (year % 100) != 0) || ((year % 4)== 0 && (year % 100) == 0 && (year % 400) == 0)){
		printf("The year you entered is a leap year");
	}
	else{
		printf("The year you entered is not a leap year");
	}
}
