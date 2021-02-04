#include <stdio.h>
#include <ctype.h>


int main(void)
{
for (int x = 'a', x != 'e', x != 'q'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
putchar(\n);
}
return (0);
}
