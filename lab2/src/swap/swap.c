#include <stdio.h>
#include "swap.h"

void Swap(char *left, char *right)
{
    char c;
    c=*left;
    *left=*right;
    *right=c;
    printf("a=%d b=%d\n",*left,*right);
}

int main(void) 
{
  char x = 4, y = 9;

  printf("x=%d y=%d\n",x,y);
// передаём адреса переменных x и y в фунцию swap
  Swap(&x,&y);

  printf("x=%d y=%d\n",x,y);

  return 0;
}