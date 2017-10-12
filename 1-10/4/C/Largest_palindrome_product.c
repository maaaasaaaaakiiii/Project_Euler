#include <stdio.h>

int main(){
  int i, j, k, max_i, max_j, palidromic, max_palidromic = 0, cnt;
  int remem[100];

  for(i = 100; i <= 999; i++){
    cnt = 0;
    for(j = 100; j <= 999; j++){
      palidromic = i * j;
      while(palidromic != 0){
	remem[cnt++] = palidromic % 10;
	palidromic = palidromic / 10;
      }
      cnt--;
      for(k = 0; k <= cnt; k++){
	if(remem[k] != remem[cnt--])
	  break;
      }
      if(k > cnt && max_palidromic < i*j){
	max_palidromic = i*j;
	max_i = i;
	max_j = j;
      }
      cnt = 0;
    }
  }

  printf("%d %d %d\n", max_i, max_j, max_palidromic);

  return 0;
}
  
