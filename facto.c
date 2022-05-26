#include <stdio.h>
int main()
{
 int num, i, facto=1;
 printf("Enter a positive integer: ");
 scanf("%d", &num);
 for(i = 1; i <= num; i++)
 {
 facto=facto*i;
 }
 printf("factorial of given number is = %d", facto);
 return 0;
}

