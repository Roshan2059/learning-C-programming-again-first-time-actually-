#include<stdio.h>

int main(){
	float total, DBMS, SE, SL;
	
	printf("Enter the marks in DBMS: \n");
	scanf("%f", &DBMS);
	printf("Enter the marks in SE: \n");
	scanf("%f", &SE);
	printf("Enter the marks in SL: \n");
	scanf("%f", &SL);
	
	total = (DBMS + SE + SL) / 3;
	
	if(total >= 40 && DBMS >= 33 && SE >= 33 && SL >= 33){
		printf("You are pass");
	} 
	else{
		printf("You are fail");
	}
	return 0;
}
