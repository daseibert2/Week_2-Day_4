#include  <stdio.h>

void main ( void )
{
  int value = 77, num = 99 ;
  int *pv= &value, *pn = &num ;
  int **ppi ;

  ppi = &pv;
  printf("**ppi = %d\n", **ppi );   //**ppi = 77

  ppi = &pn;
  printf("**ppi = %d\n", **ppi );   //**ppi = 99

  system("pause");
}
