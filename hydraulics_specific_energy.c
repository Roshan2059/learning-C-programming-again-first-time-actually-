#include<stdio.h>
#include<math.h>

int main(){
	float g = 9.81;
	float q, b;
	float y1, y2, y3;
	float a1, a2, a3;
	float r1, r2, r3;
	float v1, v2, v3;
	float e1, e2, e3;
	printf("Enter the value of q\n");
	scanf("%f", &q);
	printf("Enter the value of b\n");
	scanf("%f", &b);
	
	printf("Enter the value of y1\n");
	scanf("%f", &y1);
	printf("Enter the value of y2\n");
	scanf("%f", &y2);
	printf("Enter the value of y3\n");
	scanf("%f", &y3);
	
	a1 = b * y1;
	a2 = b * y2;
	a3 = b * y3;
	
	r1 = a1 / (b + 2 * y1);
	r2 = a2 / (b + 2 * y2);
	r3 = a3 / (b + 2 * y3);
	
	v1 = q / a1;
	v2 = q / a2;
	v3 = q / a3;
	
	e1 = y1 + (v1 * v1) / (2 * g);
	e2 = y2 + (v2 * v2) / (2 * g);
	e3 = y3 + (v3 * v3) / (2 * g);
	
	printf("The value of e1 is: %f\n", e1);
	printf("The value of e2 is: %f\n", e2);
	printf("The value of e3 is: %f\n", e3);
	
	return 0;
}

