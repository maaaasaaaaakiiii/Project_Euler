#include <stdio.h>

int main(){

  unsigned long i, max, prime_num;

  scanf("%lu", &prime_num);
  
  for (i = 2; prime_num != 1; i++){
    if(prime_num % i == 0){
      prime_num = prime_num / i;
      max = i;
      i = 1;
    }
  }

  printf("%lu\n", max);

  return 0;
}
