#include<stdio.h>
struct student{
	char name[30];
	int age;
	char faculty[10];
	int sem;
	struct subjects{
		char sub1[20];
		char sub2[20];
		char sub3[20];
		char sub4[20];
		char sub5[20];
		float m1;
		float m2;
		float m3;
		float m4;
		float m5;
	}sub;
}; 

int main(){
	struct student s1;
	printf("Enter Your name:\n");
	scanf("%s", &s1.name);
	printf("Enter Your age:\n");
	scanf("%d", &s1.age);
	printf("Enter Your faculty:\n");
	scanf("%s", &s1.faculty);
	printf("Enter Your sem:\n");
	scanf("%d", &s1.sem);
	printf("Enter Your first subject:\n");
	scanf("%s", &s1.sub.sub1);
	printf("Enter your marks in %s\n", s1.sub.sub1);
    scanf("%s", &s1.sub.m1);
    printf("Enter Your Second subject:\n");
	scanf("%s", &s1.sub.sub2);
	printf("Enter your marks in %s\n", s1.sub.sub2);
    scanf("%s", &s1.sub.m2);
    printf("Enter Your Third subject:\n");
	scanf("%s", &s1.sub.sub3);
	printf("Enter your marks in %s\n", s1.sub.sub3);
    scanf("%s", &s1.sub.m3);
    printf("Enter Your Fourth subject:\n");
	scanf("%s", &s1.sub.sub4);
	printf("Enter your marks in %s\n", s1.sub.sub4);
    scanf("%s", &s1.sub.m4);
    printf("Enter Your Fifth subject:\n");
	scanf("%s", &s1.sub.sub5);
	printf("Enter your marks in %s\n", s1.sub.sub5);
    scanf("%s", &s1.sub.m5);
	
	printf("\t\t\t\t---------------Grade Sheet---------------\n");
	printf("\tSubjects\t%s\t%s\t%s\t%s\t%s\n",s1.sub.sub1,s1.sub.sub2,s1.sub.sub3,s1.sub.sub4,s1.sub.sub5);
	printf("\tMarks\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f",s1.sub.m1,s1.sub.m2,s1.sub.m3,s1.sub.m4,s1.sub.m5);
}
