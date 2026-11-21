#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int const SIZE_SUM = 100;
    int sums[SIZE_SUM] = {0};
    int die1, die2, sum = 0;
    int n;
    cout << "How many times do you want to roll two dice (max 100): ";
    do
    {
        cin >> n;
        if (1 <= n && n <= 100)
            break;
    } while (true);
    // Populating sums array
    cout << "Sums rolled: ";
    int nLuckyRolls = 0;
    for (int i = 0; i < n; i++)
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        if (sum == 7 || sum == 11)
            nLuckyRolls++;
        sums[i] = sum;
        cout << sum << " ";
    }
    cout << endl;
    // frequencies index corresponds to the sum of which the frequency is storeds
    int const SIZE_FREQUENCIES = 13;
    int frequencies[SIZE_FREQUENCIES];
    int frequency = 0;
    for (int i = 0; i < SIZE_FREQUENCIES; i++)
    {
        frequency = 0;
        for (int j = 0; j < n; j++)
        {
            if (sums[j] == i)
                frequency++;
        }
        frequencies[i] = frequency;
    }
    cout << "Histogram: " << endl;
    for (int i = 2; i <= 12; i++)
    {
        cout << "Sum " << i << ": ";
        for (int j = 0; j < frequencies[i]; j++)
            cout << "*";
        cout << endl;
    }
    int mostFrequentSum = 2;
    for (int i = 2; i < SIZE_FREQUENCIES; i++)
    {
        if (frequencies[i] > frequencies[mostFrequentSum])
        {
            mostFrequentSum = i;
        }
    }
    cout << "Most frequent sum: " << mostFrequentSum << " (" << frequencies[mostFrequentSum] << " times)" << endl;
    cout << "Lucky rolls (7 or 11): " << nLuckyRolls << endl;
}
