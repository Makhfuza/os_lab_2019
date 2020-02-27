#!/bin/bash

echo 'Количество входных аргументов: ' $# #вывод количества входных аргументов

#среднее арифмитическое входных аргументов.
i=0
sum=0
for an_arg in "$@" ; do
  sum=$(($sum + ${an_arg}))
  i=$(($i+1))
done
echo 'Среднее арифмитическое входных аргументов: ' 
expr $sum / $i

exit 0