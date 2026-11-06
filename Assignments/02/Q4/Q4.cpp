#include <iostream>
using namespace std;
int main()
{
    // Constants for prices
    const int priceBagE = 75; // Beyond 2nd bag
    const int priceBagP = 60; // Beyond 2nd bag
    const int priceBagB = 50; // Beyond 3rd bag
    // Initialization for baggageFee
    int baggageFee;
    // Initialization for flag variable
    bool valid = true;
    // Taking ticketclass and bags input from user
    char ticketClass;
    int bags;
    cout << "ticketClass = ";
    cin >> ticketClass;
    cout << "bags = ";
    cin >> bags;
    // Conditional Structure for ticketClass
    switch (ticketClass)
    {
    case 'E':
        // Conditonal structure for bags
        if (bags >= 2)
        {
            // Calculating fee for second bag
            baggageFee = 35;
            // Calculating fee beyond second bag
            baggageFee = baggageFee + ((bags - 2) * priceBagE);
        }
        else
        {
            baggageFee = 0;
        }
        break;
    case 'P':
        // Conditional structure for bags
        if (bags > 2)
        {
            // Substracting first two free bags and calculating baggageFee
            bags -= 2;
            baggageFee = bags * priceBagP;
        }
        else
        {
            baggageFee = 0;
        }
        break;
    case 'B':
        // Conditional structure for bags
        if (bags > 3)
        {
            // Substracting first three free bags and calculating baggageFee
            bags -= 3;
            baggageFee = bags * priceBagB;
        }
        else
        {
            baggageFee = 0;
        }
        break;
    case 'F':
        // Baggage fee regardless of how many bags;
        baggageFee = 0;
        break;
    default:
        valid = false;
        cout << "Invalid ticket class";
    }
    // Conditional structure for flag
    if (valid)
    {
        cout << "Baggage fee: $" << baggageFee;
    }
    return 0;
}