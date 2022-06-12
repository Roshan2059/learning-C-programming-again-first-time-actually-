//WAP to calculate sum and average of all the elements of array.
#include<stdio.h>
int main(){
	int n, roshan[n], i, sum = 0, avg;
	printf("Enter the size of the array:\n");
	scanf("%d", &n);
	printf("Please Enter any %d numbers:\n", n);
	for(i=0;i<n;i++){
		scanf("%d", &roshan[i]);
	}
	for(i=0;i<n;i++){
		sum += roshan[i];
		avg = sum / n;
	}
	printf("The sum of the elements of the array is: %d", sum);
	printf("The average of the elements of the array is: %d", avg);
}
