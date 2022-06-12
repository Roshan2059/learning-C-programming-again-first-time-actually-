#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *ptr;
 int n, i;
 printf("Please Enter the Size of pointer that you want to allocate : ");
 scanf("%d", &n);
 printf("Enter number of elements: %d\n", n);
 // Dynamically allocate memory using malloc()
 ptr = (int*)malloc(n * sizeof(int));
 if (ptr == NULL) {
 printf("Memory not allocated.\n");
 exit(0);
 }
 else 
 {
 // Memory has been successfully allocated
 printf("Memory successfully allocated using malloc.\n");
 // Get the elements of the array
 for (i = 0; i < n; i++) 
 {
 ptr[i] = i + 1;
//scanf("%d", ptr[i]);
 }
 printf("The elements of the array are: ");
 for (i = 0; i < n; ++i) 
 {
 printf("%d, ", ptr[i]);
 }
 printf("\n\n");
 }
 return 0;
}

