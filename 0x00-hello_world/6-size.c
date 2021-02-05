#include <stdio.h>
/* sizeof*/
main()
{
char   ch = ' ';
int    int_num = 0;
float  flt_num = 0.0f;
long int long_int_num = 0;
long long int long_long_int_num = 0;
printf("Size of a char: %s byte(s) \n", sizeof(ch));
printf("Size of an int: %d byte(s) \n", sizeof(int_num));
printf("Size of a long int: %d byte(s) \n", sizeof(long_int_num));
printf("Size of a long long int: %d byte(s) \n", sizeof(long_long_int_num));
printf("Size of a float: %5.2f byte(s) \n", sizeof(flt_num));
return (0);
}
