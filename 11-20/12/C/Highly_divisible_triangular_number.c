#include <stdio.h>

int main(void)
{
  int tri_num = 1, i, j, cnt = 0;

  for(i = 2; cnt < 500; i++){
    cnt = 2;
    printf("triangle numbers = %d ", tri_num);
    for(j = 2; j <= tri_num/2; j++){
      if(tri_num % j == 0)
        cnt++;
    }
    printf("divisors = %d\n", cnt);
    tri_num += i;
  }

  printf("\n");

  return 0;
}
