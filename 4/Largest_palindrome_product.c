#include <stdio.h>

int main(){
  int palidromic, cnt = 0;
  int remem[100];

  scanf("%d", &palidromic);

  while(palidromic != 0){
    remem[cnt] = palidromic % 10;
    palidromic = palidromic / 10;
    cnt++;
  }
  
