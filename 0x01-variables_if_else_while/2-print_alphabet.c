#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 *main-Entry point
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
char x;
for (char ch = 'a'; ch <= 'z'; ch++)
{
char lower_ch = tolower(ch);
putchar(lower_ch);
}
return (0);
}
