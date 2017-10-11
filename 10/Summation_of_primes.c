#include <stdio.h>

int main(void)
{
  int i, no;
  int prime[2000000];
  int ptr = 0;
  long max = 5;

  prime[ptr++] = 2;
  prime[ptr++] = 3;

  for(no = 5; no <= 2000000; no += 2){
    int flag = 0;
    for(i = 1; prime[i] * prime[i] <= no; i++){
      if(no % prime[i] == 0){
        flag = 1;
        break;
      }
    }
    if(!flag){
      prime[ptr] = no;
      max += prime[ptr++];
    }
  }

  printf("%d %ld\n", prime[ptr-1], max);

  return 0;
}
