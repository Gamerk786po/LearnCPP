#include <iostream>
#include <ctime>   // For time
#include <cstdlib> // for srand() and rand()
using namespace std;
int main()
{
    srand(time(0));
    int nOfSentences;
    int typeOfWordNumber;
    int wordNumber;
    // Input nOfSentences
    cout << "How many sentences do you want? ";
    cin >> nOfSentences;
    // Counter control loop until nOfSentences
    for (int i = 1; i <= nOfSentences; i++)
    {
        cout << "Sentence " << i << ":" << endl;
        // Counter control loop for 4 kinds of words
        for (int j = 1; j <= 4; j++)
        {
            // Producing a random number based on the value of j ( set a starting value and add it to the random number)
            wordNumber = rand() % 4 + ((j - 1) * 4) + 1; // Offset formula add values to 0-4 random number based on the value of j
            switch (wordNumber)
            {
            case 1:
                cout << "The student ";
                break;
            case 2:
                cout << "The teacher ";
                break;
            case 3:
                cout << "The robot ";
                break;
            case 4:
                cout << "The alien ";
                break;
            case 5:
                cout << "discovered ";
                break;
            case 6:
                cout << "chased ";
                break;
            case 7:
                cout << "stole ";
                break;
            case 8:
                cout << "carried ";
                break;
            case 9:
                cout << "a laptop ";
                break;
            case 10:
                cout << "a pizza ";
                break;
            case 11:
                cout << "a treasure ";
                break;
            case 12:
                cout << "a dinosaur ";
                break;
            case 13:
                cout << "in the classroom ";
                break;
            case 14:
                cout << "on the moon ";
                break;
            case 15:
                cout << "in the cafeteria ";
                break;
            case 16:
                cout << "in the jungle ";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}