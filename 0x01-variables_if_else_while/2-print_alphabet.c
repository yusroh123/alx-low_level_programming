#include <stdio.h>
/*
*main: prints the alphabet in lower case
*Followed by a new line
* Return 0 if successful
*/
int main(void)
{ 
char ch; 
for (ch ='a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
