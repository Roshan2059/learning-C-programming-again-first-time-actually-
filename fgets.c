#include <stdio.h>
int main()
 {
char line[100];
char str[100]; 
 
 // open the file
FILE *f = fopen("fopen.txt","r");
 // if there was an error
 if(f==NULL)
 {
 perror("Error opening file"); // print error
 return(-1); 
 }
 // if there was no error
 else
 { 
 while (fgets(line,100,f)!=NULL) 
 { 
 puts(line); // print read content out to stdout
 } 
 }
 
 fclose(f); // close file#include <stdio.h> 


