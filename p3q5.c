#include<stdio.h>

int main(){
	int a, b, c, d;
	
	printf("Enter four numbers: (Press enter to enter another number)\n");
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%d\n", &c);
	scanf("%d", &d);
	
//	if(a > b){
//		if(a > c){
//			if(a > d){
//				printf("%d is greater among the four numbers entered by you.", a);
//			}
//		}
//	}
//	else if(b > a){
//		if(b > c){
//			if(b > d){
//				printf("%d is greatest among the four numbers entered by you.", b);
//			}
//		}
//	}
//	else if(c > a){
//		if(c > b){
//			if(c > d){
//				printf("%d is the greatest among the four numbers entered by you.", c);
//			}
//		}
//	}
//	else{
//		printf("%d is the greatest among the four numbers entered by you.", d);
//	}
	
	if(a > b){
		if(a > c){
			if(a > d){
				printf("%d is greater among the four numbers entered by you.", a);
			}
			else{
				printf("%d is greater among the four numbers entered by you.", d);
			}
		}
	}
	else if(b > c){
		if(b > d){
				printf("%d is greatest among the four numbers entered by you.", b);
			}
			else{
				printf("%d is greatest among the four numbers entered by you.", d);	
			}
	}	
	else if(c > d){
				printf("%d is the greatest among the four numbers entered by you.", c);
		}
	else{
		printf("%d is the greatest among the four numbers entered by you.", d);
	}

//	int a, b, c;
//	
//	printf("Enter the three numbers: (Press enter to enter another number)\n");
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
//	
//	if(a > b){
//		if(a > c){
//			printf("%d is greater among all.", a);
//		}
//		else{
//			printf("%d is greater among all", c);
//		}
//	}
//	else if(b > c){
//		printf("%d is greater among all", b);
//	}
//	else{
//		printf("%d is greater among all.", c);
//	}

return 0;
}
