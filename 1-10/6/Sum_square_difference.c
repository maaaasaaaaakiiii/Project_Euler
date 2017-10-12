#include <stdio.h>

int main(){

  int i;
  int x = 0, y = 0;

  for(i = 1; i <= 100; i++){
    x += i*i;
    y += i;
  }

  y = y*y;

  printf("%d\n", y-x);

  return 0;
}
