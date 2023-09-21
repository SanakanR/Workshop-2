/*
*****************************************************************************
 <assessment name example: Workshop - #2 (Part-1)>
Full Name : Sanakan Rajmohan
Student ID#: 118142199
Email : srajmohan1@myseneca.ca
Section : NNN
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct SHIRT_PRICES
{
	float smallShirtPrice;
	float mediumShirtPrice;
	float largeShirtPrice;
};

void SetShirtPrices(struct SHIRT_PRICES *shirt_prices);
void PrintShirtPrices(struct SHIRT_PRICES *shirt_prices);

int main()
{
	struct SHIRT_PRICES shirt_prices;
	int numberOfShirts;

	SetShirtPrices(&shirt_prices);
	PrintShirtPrices(&shirt_prices);

	printf("Patty's shirt size is \'S\'\n");
	printf("Number of shirts Patty is buying: ");
	scanf("%d", &numberOfShirts);
	printf("\n\n");



	return 0;
}



void PrintShirtPrices(float* small, float* medium, float* large)
{
	printf("Shirt Store Price List\n");
	printf("======================\n");
	printf("SMALL\t: $%.2f\n", *small);
	printf("MEDIUM\t: $%.2f\n", *medium);
	printf("LARGE\t: $%.2f\n\n", *large);
}

void SetShirtPrices(SHIRT_PRICES* shirt_prices)
{
	printf("Set Shirt Prices\n");
	printf("================\n");
	printf("Enter the price for a SMALL shirt: $");
	scanf("%f", shirt_prices.small);
	printf("\n");
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%f", medium);
	printf("\n");
	printf("Enter the price for a LARGE shirt: $");
	scanf("%f", large);
	printf("\n\n");
}
