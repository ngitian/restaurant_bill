/* Yitian huang, System Programming Quiz, 02/28/2022
The program computes the tax and tips by taking the input from command line as percentage.
Display meal cost, tax amount, tip amount, and total bill on the screen.
Meal cost will be randomly chosen between
Salad: $9.95
Soup: $4.55
Sandwich: $13.25
Pizza: $22.35
*/
#include <stdio.h> // io
#include <time.h> // time
#include <stdlib.h> // pseudo-random number generation
#include <string.h>

int main(int argc, char* argv[])
{
    // process and store command line arguments for tax and tip percentages
    if (argc != 3) { 
        printf("Usage: ./restaurant_bill [tax] [tip]\n");
        return -1;
    }
    float taxPerc = strtof(argv[1], NULL);
    float tipPerc = strtof(argv[2], NULL);

    // randomly pick a meal
    const char MEAL[4][9] = {"salad", "soup", "sandwich", "pizza"};
    const int MEAL_COST[4] = {995, 455, 1325, 2235};
    time_t t;
    srand((unsigned) time(&t));
    int r = rand() % 4;

    // calculate outputs: meal cost, tax amount, tip amount, and total bill
    int mealCost = MEAL_COST[r];
    int taxAmount = mealCost * (float) taxPerc / 100;
    int tipAmount = mealCost * (float) tipPerc / 100;
    int totalBill = mealCost + taxAmount + tipAmount;

    // output to display
    printf("%s($%.2f), tax: $%.2f, tip: $%.2f, total: $%.2f\n", MEAL[r],
        (float)mealCost/100, (float)taxAmount/100, (float)tipAmount/100, (float)totalBill/100);

    return 0;
}