#include  <stdio.h>

void main ( void )
{
  int value;
  int *pv;
  int **ppv;

  pv  = &value;
  ppv = &pv;

  **ppv = 47;  /* **ppv on the left designates a location */

  printf("value = %d\n", value );       //value = 47
  printf("**ppv = %d\n", **ppv );      //**ppv = 47

  system("pause");
}
