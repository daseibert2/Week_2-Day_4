#include  <stdio.h>

void main ( void )
{
  int value;
  int *pv;
  int **ppv;
  int **ppw;

  value = 32;
  pv=&value;
  ppv=&pv;
  ppw=&pv;

  printf("value = %d\n", value );       //value = 32
  printf("**ppv = %d\n", **ppv );       //**ppv = 32
  printf("**ppw = %d\n", **ppw);        //**ppw = 32

  system("pause");
}
