#include<stdio.h>

int main(){
	int a=10; //variable declaration
 int *add; //pointer variable declaration
 add=&a; //store address of variable a in pointer p
 printf("Address stored in a variable p is:%x\n",add); //accessing the address
 printf("Value stored in a variable p is:%d\n",*add); //accessing the value
 return 0;
}
