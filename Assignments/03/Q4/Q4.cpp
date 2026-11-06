#include <iostream>
using namespace std;

int main()
{
    // Variables Initializations
    int num1, num2;
    int largestGap = 0;
    int gapPrime1;
    int gapPrime2;
    int totalPrimes = 0;
    // Temporary variables
    int newGap;
    int prevPrime1;
    int prevPrime2;
    // Flag for prime
    bool isPrime = true;
    // Input num1 and num2 num1 < num2
    // Validation
    while (true)
    {
        cout << "Enter num1 and num2 (num1 < num2): ";
        cin >> num1 >> num2;
        if (num1 < num2)
            break;
        cout << "Error. renter the values." << endl;
    }
    // Displaying all Prime numbers between num1 and num2 inclusive
    cout << "Prime numbers: ";
    for (int i = num1; i <= num2; i++)
    {
        // loop for checking if i is a prime number
        for (int j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        // Displaying prime number
        if (isPrime)
        {
            cout << i << " ";
            totalPrimes++;
            // if there is only one prime
            if (totalPrimes == 1)
            {
                prevPrime1 = i;
            }
            // if there are two primes
            else if (totalPrimes == 2)
            {
                prevPrime2 = i;
                newGap = prevPrime2 - prevPrime1;
                largestGap = newGap;
                gapPrime1 = prevPrime1;
                gapPrime2 = prevPrime2;
            }
            // if there are more than two primes
            else
            {
                prevPrime1 = prevPrime2;
                prevPrime2 = i;
                newGap = prevPrime2 - prevPrime1;
                if (newGap >= largestGap)
                {
                    largestGap = newGap;
                    gapPrime1 = prevPrime1;
                    gapPrime2 = prevPrime2;
                }
            }
        }
        isPrime = true; // Setting isPrime back to true
    }
    cout << endl;
    cout << "Total prime numbers: " << totalPrimes << endl;
    cout << "Largest gap: " << largestGap << endl;
    cout << "Prime pair: " << gapPrime1 << " and " << gapPrime2 << endl;
    // Displaying all twin primes
    totalPrimes = 0;
    cout << "Twin primes: ";
    for (int i = num1; i <= num2; i++)
    {
        // loop for checking if i is a prime number
        for (int j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                totalPrimes++;
                break;
            }
        }
        if (isPrime)
        {
            // if primes found is 1
            if (totalPrimes == 1)
            {
                prevPrime1 = i;
            }
            // if primes found is 2
            else if (totalPrimes == 2)
            {
                prevPrime2 = i;
                if (prevPrime2 - prevPrime1 == 2)
                    cout << "( " << prevPrime1 << ", " << prevPrime2 << " ); ";
            }
            // if primes more than 2
            else
            {
                prevPrime1 = prevPrime2;
                prevPrime2 = i;
                if (prevPrime2 - prevPrime1 == 2)
                    cout << "( " << prevPrime1 << ", " << prevPrime2 << " ); ";
            }
        }
        isPrime = true;
    }
    return 0;
}