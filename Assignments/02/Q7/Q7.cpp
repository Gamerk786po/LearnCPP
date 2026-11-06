#include <iostream>
using namespace std;
int main()
{
    // Variables for storing Customers
    char cus1, cus2, cus3, cus4, cus5;
    // Variables for service
    bool cus1S = false;
    bool cus2S = false;
    bool cus3S = false;
    bool cus4S = false;
    bool cus5S = false;
    int cusServed = 0;
    int servedPercentage;
    // Variables for items customers have
    int heldM, heldS, heldT;
    // Variables for items customers want
    int wantM, wantS, wantT;
    // Variables for items customers need
    int needM, needS, needT;
    // Variable for stock
    int muffinStock, sundaeStock, tartStock;
    // Taking stock input
    cout << "Enter the Stock: " << endl;
    cout << "Muffins: ";
    cin >> muffinStock;
    cout << "Sundaes: ";
    cin >> sundaeStock;
    cout << "Tarts : ";
    cin >> tartStock;

    // Checking if any stock entered is negative
    if (muffinStock < 0 || sundaeStock < 0 || tartStock < 0)
    {
        cout << "The value of any stock item cannot be negative!";
    }
    else
    {
        // Code for Customer1
        // Taking input for cus1l
        cout << "Enter Customer 1: ";
        cin >> cus1;
        // Taking input for items held
        cout << "Enter held Muffins: ";
        cin >> heldM;
        cout << "Enter held Sudaes: ";
        cin >> heldS;
        cout << "Enter held Tarts: ";
        cin >> heldT;
        // Taking input for items want
        cout << "Enter wanted Muffins: ";
        cin >> wantM;
        cout << "Enter wanted Sudaes: ";
        cin >> wantS;
        cout << "Enter wanted Tarts: ";
        cin >> wantT;
        // Checking if any entered item is negative
        if (heldM < 0 || heldS < 0 || heldT < 0 || wantM < 0 || wantS < 0 || wantT < 0)
        {
            cout << "The value of any held or wanted item cannot be negative!";
        }
        else
        {
            // Checking that wanted item must be greater than held
            // Checking that wanted item must be greater than held
            if (wantM >= heldM && wantS >= heldS && wantT >= heldT)
            {
                // Calculating need of items for customer
                needM = wantM - heldM;
                needS = wantS - heldS;
                needT = wantT - heldT;
                // Substracting it from stock if it can be
                if (muffinStock - needM >= 0 && sundaeStock - needS >= 0 && tartStock - needT >= 0)
                {
                    muffinStock -= needM;
                    sundaeStock -= needS;
                    tartStock -= needT;
                    cusServed++;
                    cus1S = true;
                }
            }
        }

        // Code for Customer2
        // Taking input for cus1l
        cout << "Enter Customer 2: ";
        cin >> cus2;
        // Taking input for items held
        cout << "Enter held Muffins: ";
        cin >> heldM;
        cout << "Enter held Sudaes: ";
        cin >> heldS;
        cout << "Enter held Tarts: ";
        cin >> heldT;
        // Taking input for items want
        cout << "Enter wanted Muffins: ";
        cin >> wantM;
        cout << "Enter wanted Sudaes: ";
        cin >> wantS;
        cout << "Enter wanted Tarts: ";
        cin >> wantT;
        // Checking if any entered item is negative
        if (heldM < 0 || heldS < 0 || heldT < 0 || wantM < 0 || wantS < 0 || wantT < 0)
        {
            cout << "The value of any held or wanted item cannot be negative!";
        }
        else
        {
            // Checking that wanted item must be greater than held
            // Checking that wanted item must be greater than held
            if (wantM >= heldM && wantS >= heldS && wantT >= heldT)
            {
                // Calculating need of items for customer
                needM = wantM - heldM;
                needS = wantS - heldS;
                needT = wantT - heldT;
                // Substracting it from stock if it can be
                if (muffinStock - needM >= 0 && sundaeStock - needS >= 0 && tartStock - needT >= 0)
                {
                    muffinStock -= needM;
                    sundaeStock -= needS;
                    tartStock -= needT;
                    cusServed++;
                    cus2S = true;
                }
            }
        }
        // Code for Customer3
        // Taking input for cus1l
        cout << "Enter Customer 3: ";
        cin >> cus3;
        // Taking input for items held
        cout << "Enter held Muffins: ";
        cin >> heldM;
        cout << "Enter held Sudaes: ";
        cin >> heldS;
        cout << "Enter held Tarts: ";
        cin >> heldT;
        // Taking input for items want
        cout << "Enter wanted Muffins: ";
        cin >> wantM;
        cout << "Enter wanted Sudaes: ";
        cin >> wantS;
        cout << "Enter wanted Tarts: ";
        cin >> wantT;
        // Checking if any entered item is negative
        if (heldM < 0 || heldS < 0 || heldT < 0 || wantM < 0 || wantS < 0 || wantT < 0)
        {
            cout << "The value of any held or wanted item cannot be negative!";
        }
        else
        {
            // Checking that wanted item must be greater than held
            if (wantM >= heldM && wantS >= heldS && wantT >= heldT)
            {
                // Calculating need of items for customer
                needM = wantM - heldM;
                needS = wantS - heldS;
                needT = wantT - heldT;
                // Substracting it from stock if it can be
                if (muffinStock - needM >= 0 && sundaeStock - needS >= 0 && tartStock - needT >= 0)
                {
                    muffinStock -= needM;
                    sundaeStock -= needS;
                    tartStock -= needT;
                    cusServed++;
                    cus3S = true;
                }
            }
        }

        // Code for Customer4
        // Taking input for cus1l
        cout << "Enter Customer 4: ";
        cin >> cus4;
        // Taking input for items held
        cout << "Enter held Muffins: ";
        cin >> heldM;
        cout << "Enter held Sudaes: ";
        cin >> heldS;
        cout << "Enter held Tarts: ";
        cin >> heldT;
        // Taking input for items want
        cout << "Enter wanted Muffins: ";
        cin >> wantM;
        cout << "Enter wanted Sudaes: ";
        cin >> wantS;
        cout << "Enter wanted Tarts: ";
        cin >> wantT;
        // Checking if any entered item is negative
        if (heldM < 0 || heldS < 0 || heldT < 0 || wantM < 0 || wantS < 0 || wantT < 0)
        {
            cout << "The value of any held or wanted item cannot be negative!";
        }
        else
        {
            // Checking that wanted item must be greater than held
            if (wantM >= heldM && wantS >= heldS && wantT >= heldT)
            {
                // Calculating need of items for customer
                needM = wantM - heldM;
                needS = wantS - heldS;
                needT = wantT - heldT;
                // Substracting it from stock if it can be
                if (muffinStock - needM >= 0 && sundaeStock - needS >= 0 && tartStock - needT >= 0)
                {
                    muffinStock -= needM;
                    sundaeStock -= needS;
                    tartStock -= needT;
                    cusServed++;
                    cus4S = true;
                }
            }
        }

        // Code for Customer5
        // Taking input for cus1l
        cout << "Enter Customer 5: ";
        cin >> cus5;
        // Taking input for items held
        cout << "Enter held Muffins: ";
        cin >> heldM;
        cout << "Enter held Sudaes: ";
        cin >> heldS;
        cout << "Enter held Tarts: ";
        cin >> heldT;
        // Taking input for items want
        cout << "Enter wanted Muffins: ";
        cin >> wantM;
        cout << "Enter wanted Sudaes: ";
        cin >> wantS;
        cout << "Enter wanted Tarts: ";
        cin >> wantT;
        // Checking if any entered item is negative
        if (heldM < 0 || heldS < 0 || heldT < 0 || wantM < 0 || wantS < 0 || wantT < 0)
        {
            cout << "The value of any held or wanted item cannot be negative!";
        }
        else
        {
            // Checking that wanted item must be greater than held
            if (wantM >= heldM && wantS >= heldS && wantT >= heldT)
            {
                // Calculating need of items for customer
                needM = wantM - heldM;
                needS = wantS - heldS;
                needT = wantT - heldT;
                // Substracting it from stock if it can be
                if (muffinStock - needM >= 0 && sundaeStock - needS >= 0 && tartStock - needT >= 0)
                {
                    muffinStock -= needM;
                    sundaeStock -= needS;
                    tartStock -= needT;
                    cusServed++;
                    cus5S = true;
                }
            }
        }
    }

    // Calculating served percentage
    servedPercentage = (cusServed * 100) / 5;
    // Displaying Final Output
    cout << "Customers Served: " << cusServed << endl;
    cout << "Serving Rate: " << servedPercentage << "%" << endl;
    cout << "Served Customers: ";
    if (cus1S)
        cout << cus1 << ", ";
    if (cus2S)
        cout << cus2 << ", ";
    if (cus3S)
        cout << cus3 << ", ";
    if (cus4S)
        cout << cus4 << ", ";
    if (cus5S)
        cout << cus5;
    return 0;
}