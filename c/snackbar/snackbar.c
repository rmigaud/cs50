#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libs/scan_line.c"
#include <ctype.h>

#define MENU_SIZE 10
#define INPUT_LENGTH 10

typedef struct menu_item
{
  char * name;
  float price;
} menu_item;

menu_item snacks[MENU_SIZE];
void initialize_menu(menu_item * item);
float get_cost(char *choice);

int main(void)
{
  initialize_menu(snacks);
  float total_cost = 0.0;
  char choice[10];

  printf("Welcome to Beach Burger Shack!\n");
  printf("Choose from the following menu to order. Press enter when done.\n\n");

  for(int i=0; i<MENU_SIZE; i++ )
  {
    printf("%s: $%.2f\n", snacks[i].name, snacks[i].price);
  }
  printf("\n");

  char * input = NULL;
  do
  {
    input = scan_line("Enter a food item: ", input);
    total_cost += get_cost(input);
  } while( strcmp(input,"") != 0);

  printf("\nYour total cost is: $%.2f\n", total_cost);
  return 0;
}

float get_cost(char *choice)
{
  if(strcmp(choice,"") == 0) return 0.0;

  for(int i=0; i<MENU_SIZE; i++ )
  {

    if(strcmp(snacks[i].name, choice) == 0)
    {
      return snacks[i].price;
    }
  }
}

void initialize_menu(menu_item * item)
{
  item[0].name = "Burger";
  item[0].price = 9.50;

  item[1].name = "Vegan Burger";
  item[1].price = 11.00;

  item[2].name = "Hot Dog";
  item[2].price = 5.00;

  item[3].name = "Cheese Dog";
  item[3].price = 7.00;

  item[4].name = "Fries";
  item[4].price = 5.00;

  item[5].name = "Cheese Fries";
  item[5].price = 6.00;

  item[6].name = "Cold Pressed Juice";
  item[6].price = 7.00;

  item[7].name = "Cold Brew";
  item[7].price = 3.00;

  item[8].name = "Water";
  item[8].price = 2.00;
  
  item[9].name = "Soda";
  item[9].price = 2.00;
}
