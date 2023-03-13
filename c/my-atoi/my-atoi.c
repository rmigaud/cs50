#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int my_atoi(char * input);

int main(void) 
{
  char * input = malloc(11 * sizeof(char));

  printf("Enter a positive integer: ");
  scanf("%s", input);
  my_atoi(input);

  return 0;
}

int my_atoi(char * input)
{
  char ch = *input;
  int next_index = 1;
  int negative = 0;
  int length = 0;
  int dec_length = 0;
  int int_array[11];
  double total = 0.0;

  while(ch != '\0' )
  {
    if(negative == 0 && length == 0 && ch == '-')
    {
      negative = -1;
    } else if(negative == 0 && length == 0 && ch >=48 && ch <=57) {
      negative = 1;
    }
    
    if(ch >=48 && ch <=57 && dec_length == 0){
      int_array[length] = ((int) ch) - 48;
      length++;
    }
    ch = *(input + next_index);
    next_index++;
  }
  for(int i = length-1, j = 0; i>=0; i--,j++)
  {
    total += (int_array[i] * pow(10, j));
  }
  total *= negative;
  printf("%f\n", total);
};