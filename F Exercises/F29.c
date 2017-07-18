#include  <stdio.h>

void main ( void )
{
  int value = 77, num = 99 ;
  int *pv ;
  int **ppi ;

  ppi = &pv;

  pv  = &value;
  printf("**ppi = %d\n", **ppi );   //**ppi = 77

  pv  = &num;
  printf("**ppi = %d\n", **ppi );   //**ppi = 99

  system("pause");
}
