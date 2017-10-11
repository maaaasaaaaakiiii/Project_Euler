#include <stdio.h>

int main(void)
{
  int a, b, c = 999;
  int a2, b2, c2; 
  int product;

  for(a = 1; a <= 333; a++ ){
    c = c - a;
    printf("%d\n", c);
    for(b = 1; c >= b; b++){
      if(c*c == a*a + b*b){
        a2 = a;
        b2 = b;
        c2 = c;
        product = a * b * c;
      }
      c--;
    }
    c = 999;
  }

  printf("%dx%d + %dx%d = %dx%d %d\n", a2, a2, b2, b2, c2, c2, product);

  return 0;
}
