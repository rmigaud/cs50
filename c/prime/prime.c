#include <stdio.h>

#define TRUE 1
#define FALSE 0

void get_primes(int min, int max);

int main(void)
{
  int max;
  int min;

  printf("Minimum: ");
  scanf("%i", &min);
  printf("Maximum: ");
  scanf("%i", &max);

  
  get_primes(min, max);
  return 0;
}

void get_primes(int min, int max){
  // printf("get_primes called.\n");
  for(int i=min; i <= max; i++ )
  {
    // printf("testing %i.\n", i);
    int is_prime = TRUE;
    if(i <= 1) {
      continue;
    } else if(i==2) {
      printf("%i\n",i);
      continue;
    }
    int j = i - 1;
    do
    {
      if(i % j == 0){
        // printf("%i %% %i==0 -- %i is not prime.\n", i, j, i);
        is_prime = FALSE;
        break;
      } else {
        // printf("%i %% %i==%i, continuing.\n", i, j, i%j);
        j--;
      }
    } while (j > 1);
    if(is_prime)
    {
      printf("%i\n",i);
    }
  }
};
