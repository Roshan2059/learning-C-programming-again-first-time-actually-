#include<stdio.h>

	struct employee{
		char name[30];
		int salary;
		char post[20]; 
	};
	
int main(){
	struct employee e[2];

	strcpy(e[0].name,"Roshan"); 
	e[0].salary = 50000; 
	strcpy(e[0].post,"Manager"); 
	strcpy(e[1].name,"Harry"); 
	e[1].salary = 50000; 
	strcpy(e[1].post,"CEO"); 
	strcpy(e[2].name,"Larry");  
	e[2].salary = 50000; 
	strcpy(e[2].post,"Web Dev"); 
	int i;
	for(i = 0; i < 3; i++){
		printf("Your Name is: %s\n", e[i].name);
		printf("Your Salary is: %d\n", e[i].salary);
		printf("Your Post is: %s\n\n\n", e[i].post);
	}
}
