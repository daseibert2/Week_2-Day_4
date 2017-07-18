#include  <stdio.h>

void main ( void )
{
  int value;
  int *pv;

  pv = &value;

  *pv = 47;  /* *pv on the left designates a location */

  printf("value = %d\n", value );   //value  = 47
  printf("*pv   = %d\n", *pv );     //*pv    = 47

  system("pause");
}
