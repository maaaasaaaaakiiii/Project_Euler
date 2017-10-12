#include <stdio.h>
#include <stdlib.h>
#define A_N 13

int main(void)
{
  int i, j, max_i;
  long array[A_N], max = 0, product = 1;
  char x[1050];
  FILE *fp;

  fp = fopen("Largest_product_in_a_series.txt", "r");
  fgets(x, 1001, fp);
  fclose(fp);

  for(i = 0; i <= 1000 - A_N; i++){
    for(j = 0; j < A_N; j++){
      array[j] = x[i+j] - '0';
      printf("%ld*", array[j]);
      if(array[j] == 0){
	i += j;
	break;
      }
      product *= array[j];
    }
    printf("\nproduct = %ld, i = %d\n", product, i);
    if(max < product){
      max = product;
      max_i = i;
    }
    
    product = 1;
  }

  printf("%ld, %d\n", max, max_i);
  return 0;
}
