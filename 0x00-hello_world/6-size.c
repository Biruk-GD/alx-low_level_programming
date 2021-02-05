#include <stdio.h>
/**
*main-Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
int ch = sizeof(char);
int int_num = sizeof(int);
int flt_num = sizeof(float);
int long_int_num = sizeof(long int);
int long_long_int_num = sizeof(long long int);
printf("Size of a char: %d byte(s) \n", ch);
printf("Size of an int: %d byte(s) \n", int_num);
printf("Size of a long int: %d byte(s) \n", long_int_num);
printf("Size of a long long int: %d byte(s) \n", long_long_int_num);
printf("Size of a float: %d byte(s) \n", flt_num);
return (0);
}
