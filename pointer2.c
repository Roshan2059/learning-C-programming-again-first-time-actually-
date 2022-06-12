#include<stdio.h>
int SumofArrNumbers(int *arr, int Size)
{
 int i,sum = 0;
 for(i = 0; i < Size; i++)
 {
 sum = sum + arr[i];
 }
 return sum;
}
int main()
{
 int i, Add, Size, a[10];
 printf("Please Enter the Size of an Array : ");
 scanf("%d", &Size);
 printf("\nPlease Enter Array Elements : \n");
 for(i = 0; i < Size; i++)
 {
 scanf("%d", &a[i]);
 }
 Add = SumofArrNumbers(a, Size);
 printf("Sum of Elements in this Array = %d \n", Add);
 return 0;
}

