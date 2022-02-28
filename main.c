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

    // calculate outputs: meal cost, tax amount, tip amount, and total bill

    // output to display

    return 0;
}