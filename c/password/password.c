#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

char * get_password(char * password);
char * validate_password(char * password);

int main (void) 
{
  printf("password.c\n");
  char * password;
  password = get_password(password);
  validate_password(password);
  
  free(password);
  return 0;
}

char * get_password(char * password)
{
  printf("Enter your password: ");
  password = malloc(10 * sizeof(char));
  if(password == NULL) 
  {
    free(password);
    printf("Unable to allocate memory.");
  }
  
  scanf("%10s", password);
  return password;
}

char * validate_password(char * password)
{
  char ch = *(password);
  int next_index = 1;
  int upper=false, lower=false, number=false, symbol=false;
  
  while(ch != '\0')
  {
    if(ch >=97 && ch <=122)
    {
      lower=true;
    }
    if(ch >=65 && ch <=90)
    {
      upper=true;
    }
    if((ch >=32 && ch <=47) || (ch >=58 && ch <=64))
    {
      symbol=true;
    }
    if(ch >=48 && ch <=57)
    {
      number=true;
    }
    
    ch = *(password + next_index);
    next_index++;
  }

  if(upper && lower && number && symbol) 
  {
    printf("Your password is valid!\n");
  } else {
    printf("Your password needs at least one uppercase ");
    printf("letter, lowercase letter, number and symbol!\n");
  }
}