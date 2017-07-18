#include  <stdio.h>


void main ( void )
{
  int value, num = 99 ;
  int *pv= &value, *pn = &num ;
  int **ppv= &pv ;

  **ppv = *pn;  /* ugly statement */

  printf("**ppv   = %d\n", **ppv );     //**ppv   = 99

  system("pause");
}
