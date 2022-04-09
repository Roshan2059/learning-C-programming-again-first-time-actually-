#include<stdio.h>

int main(){
	float cel, far;
	printf("Enter the value in celcius to convert in farenheit\n");
	scanf("%f", &cel);
	far = (cel * 9/5) + 32;
	printf("%f degree celcius is %f degree farenheit",cel ,far);
}
