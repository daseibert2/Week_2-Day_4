#include  <stdio.h>

void main ( void )
{
  int value;
  int *pv;
  int **ppv;

  value = 32;
  pv = &value;
  ppv = &pv;

  printf("value = %d\n", value );            //value = 32
  printf("*pv   = %d\n", *pv );              //*pv   = 32
  printf("*( *ppv ) = %d\n", *( *ppv ) );    //*( *ppv ) = 32

  system("pause");
}
