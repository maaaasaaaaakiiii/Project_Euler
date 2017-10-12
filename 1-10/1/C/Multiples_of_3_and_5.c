#include <stdio.h>

int main(){
  int i;
  int sum3, sum5, sum15, sum_all;

  sum3 = (999/3)*(3+(3*(999/3)))/2;
  sum5 = (999/5)*(5+(5*(999/5)))/2;
  sum15 = (999/15)*(15+(15*(999/15)))/2;

  sum_all = sum3 + sum5 - sum15;

  printf("%d\n", sum_all);

  return 0;
} 
