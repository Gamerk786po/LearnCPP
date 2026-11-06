#include <iostream>
using namespace std;
int main()
{
    // Constants for prices on each tier
    const float priceTier1 = 5;
    const float priceTier2 = 7;
    const float priceTier3 = 24.40;
    const float priceTier4 = 24.91;
    const float priceTier5 = 26.15;
    const float priceTier6 = 27.59;
    // Intialization of Tempeoray Variables
    float priceUnit, tax;
    // Initialization for bill
    int bill = 0;
    // Taking input for units consumed from user
    int unitsConsumed;
    // Variables for containing tiers units
    int tier1, tier2, tier3, tier4, tier5, tier6;
    cout << "Enter the number of units consumed: ";
    cin >> unitsConsumed;
    // Check if number of units Consumed is positive
    if (unitsConsumed >= 0)
    {
        // Check for tier1
        if (unitsConsumed >= 100)
        {
            tier1 = 100;
        }
        else
        {
            tier1 = unitsConsumed;
        }

        // Check for tier2
        if (unitsConsumed <= 100)
        {
            tier2 = 0;
        }
        else if (unitsConsumed >= 300)
        {
            tier2 = 200;
        }
        else
        {
            tier2 = unitsConsumed - 100;
        }

        // Check for tier3
        if (unitsConsumed <= 300)
        {
            tier3 = 0;
        }
        else if (unitsConsumed >= 400)
        {
            tier3 = 100;
        }
        else
        {
            tier3 = unitsConsumed - 300;
        }

        // Check for tier4
        if (unitsConsumed <= 400)
        {
            tier4 = 0;
        }
        else if (unitsConsumed >= 500)
        {
            tier4 = 100;
        }
        else
        {
            tier4 = unitsConsumed - 400;
        }

        // Check for tier5
        if (unitsConsumed <= 500)
        {
            tier5 = 0;
        }
        else if (unitsConsumed >= 600)
        {
            tier5 = 100;
        }
        else
        {
            tier5 = unitsConsumed - 500;
        }

        // Check for tier6
        if (unitsConsumed <= 600)
        {
            tier6 = 0;
        }
        else if (unitsConsumed >= 700)
        {
            tier6 = 100;
        }
        else
        {
            tier6 = unitsConsumed - 500;
        }

        bill = (tier1 * priceTier1) + (tier2 * priceTier2) + (tier3 * priceTier3)
        + (tier4 * priceTier4) + (tier5 * priceTier5) + (tier6 * priceTier6);
        // Calculation for Total Bill
        // Adding tax to bill
        tax = bill * 0.10;
        bill += tax;
        // Output for Total bill
        cout << "The total electricity bill is: PKR " << bill;
    }
    else
    {
        cout << "Please enter a positive number";
    }
    return 0;
}