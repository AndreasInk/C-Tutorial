/* includes a library to import basic functions like printf
std stands for standard */
#include <stdio.h>

/* int is a data type that needs to be returned, main is an indentifier, the whole thing is a function */ 
int main()
{
/* char stands for charcter, add [] after name of var to include multiple charcters
all statments have colons */ 
char name[] = "John";
int age = 34;

/* printf is a function imported by the standard library, %s inserts a string at that is declared at the end of the print func, %i does the same but its an integer */ 
printf("%s is %i", name, age);
/* functions need to return something to show it worked */ 
return 0;
}
