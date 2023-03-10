#include <stdio.h>
#include "../libs/mycs50.c"

char* scan_line( char * prompt,char *line);

int main(void) 
{
  char * firstName = NULL;
  char * lastName = NULL;

  firstName = scan_line("What is your first name? ", firstName);
  lastName = scan_line("What is your last name? ", lastName);

  printf("Hello, %s %s!", firstName, lastName);
  
  return 0;
}
