#include<stdio.h>

struct student{
	char name[30];
	int roll;
	float marks;
};
int main(){
	struct student s1;
	strcpy(s1.name,"Roshan Panta");
	s1.roll=13;
	s1.marks=92.5;
	
	printf("The name is: %s\n", s1.name);
	printf("The roll no is: %d\n", s1.roll);
	printf("The name is: %f", s1.marks);
}
