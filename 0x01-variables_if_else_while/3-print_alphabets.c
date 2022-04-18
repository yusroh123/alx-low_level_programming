#include <stdio>
/**
* main:Prints the alphabet in lower case followed by upper case 
*Followed by a new line
*return:0 if successful
"/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
