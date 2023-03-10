// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

// #include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    // float bill_amount = get_float("Bill before tax and tip: ");
    float bill_amount;
    printf("Bill before tax and tip: ");
    scanf("%f", &bill_amount);
    // printf("Bill: %.2f.", bill_amount);

    // float tax_percent = get_float("Sale Tax Percent: ");
    float tax_percent;
    printf("Sale Tax Percent: ");
    scanf("%f", &tax_percent);
    // printf("tax_percent: %.2f.", tax_percent);


    // int tip_percent = get_int("Tip percent: ");
    int tip_percent;
    printf("Tip percent: ");
    scanf("%i", &tip_percent);
    // printf("tip_percent: %.2f", tip_percent);
    
    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float p_tax = (tax / 100.0) +1.0;
    float p_tip =( tip / 100.0) +1.0;

    return( ((bill * p_tax) * p_tip ) /2.0);
}