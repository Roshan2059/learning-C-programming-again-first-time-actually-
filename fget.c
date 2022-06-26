#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE *fPtr;
 char ch;
 fPtr = fopen("E:/Programming world/Actual Programming/C Programming/fopen.txt","w");
 /* fopen() return NULL if last operation was unsuccessful */
 if(fPtr == NULL)
 {
 printf("Unable to open file.\n");
 printf("Please check whether file exists and you have read privilege.\n");
 exit(EXIT_FAILURE);
 }
 /* File open success message */
 printf("File opened successfully. Reading file contents character by character. \n\n");
 do 
 {
 /* Read single character from file */
 ch = fgetc(fPtr);
 /* Print character read on console */
 putchar(ch);
 } while(ch != EOF); /* Repeat this if last read character is not EOF */
 fclose(fPtr);
 return 0;
}
