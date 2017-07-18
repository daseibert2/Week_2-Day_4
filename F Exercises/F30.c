#include  <stdio.h>

void main ( void )
{
  int value;
  int *pv;
  int **ppv;

  value = 32;
  pv = (int *)&ppv; //never assigned a number; uses address #
  ppv = &pv;        //ppv not declared as int so (int *) forces it to be one

  printf("value = %d\n", value );       //value = 32
  printf("*pv   = %d\n", *pv );         //*pv   = location address
  printf("**ppv = %d\n", **ppv );       //**ppv = location address

  system("pause");
}
