#include <stdio.h>
/**
*main prints all alphabet in lowercase 
*Except e and q
*Returns 0 if successful
*/
int main(void)
{
char ch = 'a'; 
while (ch <= 'z')
{ 
if (ch != 'e' && ch != 'q')
{putchar(ch);
}
ch++;
}
putchar ('\n');
return (0);
}
