#include <stdio.h>
#include <stdlib.h>

int * get_hours(int * num_weeks);
void get_operation(int * hours, int num_weeks);

int main (void)
{
  int num_weeks;
  printf("Number of weeks taking CS50: ");
  scanf("%i", &num_weeks);

  int * hours = get_hours(&num_weeks);
  get_operation(hours, num_weeks);

  free(hours);
  return EXIT_SUCCESS;
}

int * get_hours(int * num_weeks) 
{
  int * hours = malloc((*num_weeks) * sizeof(int));
  if(hours == NULL)
  {
    printf("Failed to malloc for size %i ", ((*num_weeks) * sizeof(int)));
    exit(1);
  }
  for(int i =0; i < (*num_weeks); i++)
  {
    
    printf("Week %i HW Hours: ", i);
    scanf("%i", &hours[i]);
  }
  return hours;
}

void get_operation(int * hours, int num_weeks)
{
  char op;
  printf("Enter T for total hours, enter A for average hours per week: ");
  scanf("\n%c", &op);
  
  float avg = 0.0;
  for(int i = 0; i < num_weeks; i++)
  {
    avg += (float) hours[i];
  }

  if(op == 'A' || op =='a') {
    avg = avg / (float)num_weeks;
    printf("average: %.1f\n", (avg));
    
  } else {
    printf("total: %.1f\n", avg);
  }
}