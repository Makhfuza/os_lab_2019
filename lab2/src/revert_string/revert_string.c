#include "revert_string.h"
#include <stdio.h>
#include <locale.h>

void RevertString(char *str)
{
int i=0,len=0;
while (str[i++])len++; //в этом цикле узнаем длину строки

for(i=len-1;i>=0;i--)
{
printf("%c",str[i]);
}
}
