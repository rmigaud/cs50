#include <stdio.h>

// a=4
// e=3
// i=1
// o=0
void leet_speak(char * word);

int main( int argc, char *argv[] )
{
  if(argc < 2)
  {
    printf("useage: ./no-vowels word\n");
  } else {
    printf("argv: %s\n", *(argv+1));
    leet_speak(*(argv+1));
  }
  return 0;
}
void leet_speak(char * word)
{
  char ch = *word;
  int next_index = 1;

  while(ch != '\0')
  {
    if(ch == 'a')
    {
       ch = '4';
    }
    if(ch == 'e')
    {
       ch = '3';
    }
    if(ch == 'i')
    {
       ch = '1';
    }
    if(ch == 'o')
    {
       ch = '0';
    } 
    printf("%c",ch);
    ch = *(word + next_index);
    next_index++;
  }
  printf("\n");
}