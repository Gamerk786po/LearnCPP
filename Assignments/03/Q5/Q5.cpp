#include <iostream>
using namespace std;

int main()
{
    // Variables Initializations
    int prev1, prev2;
    int sum = 0;
    int userInput = 0;
    int position;
    int spikesPerRound = 0, totalSpikes = 0;
    // Counter control loop for 3 rounds
    for (int i = 1; i <= 3; i++)
    {
        // Prompt for input
        cout << "Enter Round " << i << " Values (negative value to terminate): ";
        position = 1; // Mentaining position of userInputs
        do
        {
            // Input userInput
            cin >> userInput;
            // If userInput encounters a negative userInput
            if (userInput < 0)
                break;
            // If position == 1
            if (position == 1)
                prev1 = userInput;
            // If position == 2
            else if (position == 2)
            {
                prev2 = userInput;
                sum = prev1 + prev2;
            }
            // If position is more than 2
            else
            {
                // If userInput is greater than sum
                if (userInput > sum)
                {
                    cout << "Spike at position " << position << ": " << userInput << " > " << prev1 << " + " << prev2 << endl;
                    spikesPerRound++;
                }
                prev1 = prev2;
                prev2 = userInput;
                sum = prev1 + prev2;
            }
            position++;
        } while (userInput >= 0);
        // Add spikesPerRound to totalSpikes
        totalSpikes += spikesPerRound;
        cout << "Round " << i << " spikes: " << spikesPerRound << endl;
        spikesPerRound = 0; // Reset spikesPerRound
    }
    // Displaying final result
    cout << "Total spikes: " << totalSpikes;
    return 0;
}