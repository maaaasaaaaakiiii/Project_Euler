#include<stdio.h>

int main(){

  int i;
  int fibonacci, sum = 2;
  int fibonacci_pre1 = 1, fibonacci_pre2 = 2;

  printf("%d\n%d\n%d\n", fibonacci_pre1, fibonacci_pre2, fibonacci);
  fibonacci = fibonacci_pre1 + fibonacci_pre2;
  while(fibonacci < 4000000){
    fibonacci_pre1 = fibonacci_pre2;
    fibonacci_pre2 = fibonacci;
    fibonacci = fibonacci_pre1 + fibonacci_pre2;
    printf("%d\n", fibonacci);
    if(fibonacci % 2 == 0)
      sum += fibonacci;
  }

  printf("sum = %d\n", sum);

  return 0;
}
