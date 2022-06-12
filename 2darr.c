#include<stdio.h>

int main(){
	int roshan[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int rashmi[3][3] = {{2,5,6}, {5,1,3}, {9,5,4}};
	int i,j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d\t",roshan[i][j]+rashmi[i][j]);
		}
		printf("\n");
	}
	
//	for(i=0;i<=2;i++){
//		for(j=0;j<=2;j++){
//			printf("%d\t",rashmi[i][j]);
//		}
//		printf("\n");
//	}
}
