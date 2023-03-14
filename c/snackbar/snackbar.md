[snackbar](https://cs50.harvard.edu/x/2023/problems/3/snackbar/)

## Motivation

Imagine you're at the beach and want to order a number of items from the snack bar. You have a limited amount of cash on you, and you want to get a total cost for your items before ordering. In `snackbar.c` you will complete two functions. First is `add_items` which will add at least the first 4 items on the Beach Burger Shack menu. Then you will complete `get_cost` which will implement a linear search algorithm to search for each item you choose, and return the corresponding price.

- You can hard code the menu items and prices in the `add_items` function.

- There is a function in `strings.h` that may come in handy here.

## Usage

```
$ ./snackbar

Welcome to Beach Burger Shack!
Choose from the following menu to order. Press enter when done.

Burger: $9.50
Vegan Burger: $11.00
Hot Dog: $5.00
Cheese Dog: $7.00
Fries: $5.00
Cheese Fries: $6.00
Cold Pressed Juice: $7.00
Cold Brew: $3.00
Water: $2.00
Soda: $2.00

Enter a food item: burger
Enter a food item: fries
Enter a food item: soda
Enter a food item:

Your total cost is: $16.50
```

```
$ ./snackbar

Welcome to Beach Burger Shack!
Choose from the following menu to order. Press enter when done.

Burger: $9.50
Vegan Burger: $11.00
Hot Dog: $5.00
Cheese Dog: $7.00
Fries: $5.00
Cheese Fries: $6.00
Cold Pressed Juice: $7.00
Cold Brew: $3.00
Water: $2.00
Soda: $2.00

Enter a food item: cold brew
Enter a food item: hot dog
Enter a food item:

Your total cost is: $8.00
```
