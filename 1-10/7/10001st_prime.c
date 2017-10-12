#include <stdio.h>

int main(void)
{
  int i, no;
  int prime[10001];
  int ptr = 0;

  prime[ptr++] = 2;
  prime[ptr++] = 3;

  for(no = 5; ptr != 10001; no += 2){
    int flag = 0;
    for(i = 1; prime[i] * prime[i] <= no; i++){
      if(no % prime[i] == 0){
        flag = 1;
        break;
      }
    }
    if(!flag)
      prime[ptr++] = no;
  }

  printf("%d\n", prime[ptr-1]);

  return 0;
}
