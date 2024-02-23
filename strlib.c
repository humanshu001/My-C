#include <stdio.h>
#include <string.h>
int main(){
    char st[100];
    char st2[100];
    printf("Enter your string: \n");
    gets(st);// gets() is a function that reads a string from the console
    gets(st2);
    printf("----------------------\n");
    puts(st);// puts() is a function that prints a string on the console
    puts(st2);    
    return 0;
}
   
/*
gets() is a function that reads a string from the console
puts() is a function that prints a string on the console
strlen() is a function that returns the length of the string
strcpy() is a function that copies the string
strcat() is a function that concatenates the string
strcmp() is a function that compares the string


syntax:
gets(string);
puts(string);
strlen(string);
strcpy(string1, string2);
strcat(string1, string2);
strcmp(string1, string2);

other functions:
strlwr() is a function that converts the string to lowercase
strupr() is a function that converts the string to uppercase
strrev() is a function that reverses the string

syntax:
strlwr(string);
strupr(string);
strrev(string);

first string in strcpy() and strcat() is the destination string
second string in strcpy() and strcat() is the source string

first string in strrev() is the string to be reversed
second string in strrev() is the destination string

*/