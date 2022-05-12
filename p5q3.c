#include<stdio.h>

int main(){
	int mass;
	float result;
	printf("Enter the mass:\n");
	scanf("%d", &mass);
	result = fcalc(mass);
	printf("The gravitational force for the body with the mass %d is %.2f", mass, result);
	return 0;
}

float fcalc(float mass){
	float force = mass * 9.8;
	return force;
}
