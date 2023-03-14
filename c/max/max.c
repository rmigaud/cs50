#include <stdio.h>

int main(void) 
{
  int length=0;
  int max=0;

  while (length <= 0) 
  {
    printf("Number of elements: ");
    scanf("%i", &length);
  }

  for( int i=0; i < length; i++)
  {
    int current_element = 0;
    printf("Element %i: ", i);
    scanf("%i", &current_element);
    if(current_element > max || i == 0)
    {
      max = current_element;
    }
  }
  printf("The max value is: %i.", max);

}