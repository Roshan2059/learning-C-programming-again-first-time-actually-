#include<stdio.h>
float total(float marks[]);
float avg(float marks[]);
int main(){
	float marks[] = {78,89,56,90,85};
	printf("The total marks is: %.2f", total(marks));
	printf("The average marks is: %.2f", avg(marks));
}

float total(float marks[]){
	int i;
	float sum = 0;
	for(i = 0; i <= 6; i++){
		sum = sum + marks[i];
	}
	return sum;
}

float avg(float marks[]){
	int i;
	float sum = 0, avg;
	for(i = 0; i <= 6; i++){
		sum = sum + marks[i];
	}
	avg  = sum / 5;
	return avg;
}

//#include <stdio.h>
//float calculateSum(float scoremarks []);
//int main() 
// {
// float result, scoremarks[] = {50,91,63,73,85};
// // age array is passed to calculateSum()
// result = calculateSum(scoremarks); 
// printf("Result = %.2f", result);
// return 0;
// }
//float calculateSum(float scoremarks []) 
// {
// float sum = 0.0;
// int i;
// for (i = 0; i < 6; i++) 
// {
//sum += scoremarks [i];
// }
// return sum;
// }

//$kjadh = array("sds","ahsdg")
