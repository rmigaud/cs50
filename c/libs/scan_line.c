#include <stdlib.h>
#include <stdio.h>

char* scan_line( char * prompt,char *line)
{
  printf(prompt);
    int ch;             // as getchar() returns `int`
    long capacity = 0;  // capacity of the buffer
    long length = 0;    // maintains the length of the string
    char *temp = NULL;  // use additional pointer to perform allocations in order to avoid memory leaks

    while ( ((ch = getchar()) != '\n') && (ch != EOF) )
    {
        if((length + 1) >= capacity)
        {
            // resetting capacity
            if (capacity == 0)
                capacity = 2; // some initial fixed length 
            else
                capacity *= 2; // double the size

            // try reallocating the memory
            if( (temp = realloc(line, capacity * sizeof(char))) == NULL ) //allocating memory
            {
                printf("ERROR: unsuccessful allocation");
                // return line; or you can exit
                exit(1);
            }

            line = temp;
        }

        line[length] = (char) ch; //type casting `int` to `char`
        length++;
    }
    line[length] = '\0'; //inserting null character at the end

    // remove additionally allocated memory
    if( (temp = realloc(line, (length + 1) * sizeof(char))) == NULL )
    {
        printf("ERROR: unsuccessful allocation");
        // return line; or you can exit
        exit(1);
    }

    line = temp;
    return line;
}