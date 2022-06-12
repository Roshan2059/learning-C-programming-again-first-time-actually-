#include<stdio.h>

struct student{
	char name[20];
//	char subject[10];
	int marks[4];
	int sum;
};
int main(){
	int sum = 0;
	int i;
	float per;
	struct student s1;
	
	printf("Enter the name:\n");
	scanf("%s", &s1.name);
	for(i = 0; i < 5; i++){
		printf("Enter the marks in subject %d:\n", i+1);
		scanf("%d", &s1.marks[i]);
	}
	printf("\n\n\n\t\t......Grade sheet of %s.......\n", s1.name);
		printf("\n\n\t\tSubjects\t\tMarks\n");
		
		for(i = 0; i < 5; i++){
		printf("\t\tsubject %d\t\t %d\n", i + 1, s1.marks[i]);
		}
		for(i = 0; i < 5; i++){
		sum = sum + s1.marks[i];
	}
	per = sum / 5;
	printf("\n\n\t\tTotal marks: %d", sum);
	printf("\tPercentage: %.2f", per);
}
