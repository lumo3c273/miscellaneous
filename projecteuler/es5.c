#include <stdio.h>

/*
   2 -> 2
   3 -> 3
   4 -> 2^2
   5 -> 5
   6 -> 2*3
   7 -> 7
   8 -> 2^3
   9 -> 3^2
   10 -> 2*5
   11 -> 11
   12 -> 2^2*3
   13 -> 13
   14 -> 2*7
   15 -> 3*5
   16 -> 2^4
   17 -> 17
   18 -> 2 * 3^2
   19 -> 19
   20 -> 2^2 * 5
   
   LCM: 2^4 * 3^2 * 5 * 7 * 13 * 17 * 19
*/

int main( void )
{
   printf("%d\n", 2*2*2*2*3*3*5*7*13*17*19 );
   return 0;
}
