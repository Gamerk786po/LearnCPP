#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    const int SIZE = 80;
    char sentence[SIZE];
    cout << "Enter a sentence: ";
    cin.getline(sentence, SIZE);
    int lenght = strlen(sentence); // It can also be calculatd using count and loop until \n is encounterd
    bool palindrome = false;
    int left = 0;
    int right = lenght - 1; // Initialize right from array index 0 and left from SIZE - 1
    // Run a loop until right != left
    while (left < right)
    {
        // left is not a letter decrement it and continue
        if (!((65 <= sentence[left] && sentence[left] <= 90) || (97 <= sentence[left] && sentence[left] <= 122)))
        {
            left++;
            continue;
        }
        // right is not a letter increment it and continue
        if (!((65 <= sentence[right] && sentence[right] <= 90) || (97 <= sentence[right] && sentence[right] <= 122)))
        {
            right--;
            continue;
        }
        // Compare right and left
        if (((65 <= sentence[right] && sentence[right] <= 90) ? sentence[right] : sentence) == (sentence[left] + 32))
            palindrome = true;
        else
        {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }
    cout << "Palindrome " << ((palindrome) ? "Yes" : "No") << endl;
    int frequency;
    bool occuredBefore;
    for (int i = 0; i < lenght; i++)
    {
        occuredBefore = false;
        frequency = 0;
        for (int j = 0; j < i; j++)
        {
            if (sentence[j] == sentence[i])
            {
                occuredBefore = true;
                break;
            }
        }
        if (!occuredBefore)
        {
            for (int j = i + 1; j < lenght; j++)
            {
                if ((sentence[j] + 32) == (sentence[i] + 32))
                    frequency++;
            }
            cout << (static_cast<char>(sentence[i] + 32)) << " -> " << frequency << endl;
        }
    }
    return 0;
}
