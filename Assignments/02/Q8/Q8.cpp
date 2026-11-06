#include <iostream>
using namespace std;

int main()
{
    int credits;
    int lossStreak;
    bool wonLastRound;
    bool aliveLastRound;
    bool teammatesBuying;

    // Taking inputs
    cout << "credits = ";
    cin >> credits;

    cout << "lossStreak = ";
    cin >> lossStreak;

    cout << "wonLastRound = ";
    cin >> wonLastRound;

    cout << "aliveLastRound = ";
    cin >> aliveLastRound;

    cout << "teammatesBuying = ";
    cin >> teammatesBuying;

    // Step 1: Determine the Round Economy 
    if (wonLastRound)
    {
        if (credits <= 800)
            cout << "LOW FUNDS -- Consider saving." << endl;
        else
            cout << "WINNING ECONOMY -- Full purchase possible." << endl;
    }
    else
    {
        if (lossStreak == 1)
            cout << "1 LOSS -- Low loss bonus." << endl;
        else if (lossStreak == 2)
            cout << "2 LOSSES -- Medium loss bonus." << endl;
        else if (lossStreak >= 3)
            cout << "MAX LOSS BONUS -- Strong loss bonus available." << endl;
    }

    // Step 2 — Determine Whether the Player Can Afford a Full Buy
    // Step 3: Determine Whether a Force Buy Is Possible 
    // Step 4: Determine the Economy Buy 
    if(credits >= 4000){
        if(teammatesBuying)
            cout << "FULL BUY -- Buy your main equipment." << endl;
        else
            cout << "TEAM NOT BUYING -- Consider saving for the next round." << endl;
    }
    else
    {
        if(credits >= 2500){
            if(lossStreak >= 2)
                cout << "FORCE BUY AVAILABLE -- You have enough credits after consecutive losses." << endl;
            else
                cout << "PARTIAL BUY -- Purchase only essential equipment." << endl;
        }
        else
        {
            if(lossStreak >= 3)
                cout << "ECO ROUND -- Save credits and use minimal equipment." << endl;
            else{
                if(credits >= 1000)
                    cout << "LIGHT BUY -- Purchase inexpensive equipment only." << endl;
                else
                    cout << "HARD ECO -- Save all available credits." << endl;
            }
                
            
        }
    }
    // Step 5: Check the Player's Previous-Round Survival 
    if(aliveLastRound)
        cout << "You saved some equipment from the previous round." << endl;
    else{
        if(lossStreak >= 2)
            cout << "Lost equipment + loss bonus -- Economy is recovering." << endl;
        else
            cout << "Lost equipment -- Economy remains weak." << endl;
    }

    // Step 6: Final Round Status
    if(credits >= 4000 && teammatesBuying)
        cout << "ROUND STATUS: FULL BUY ROUND." << endl;
    else if(credits >= 2500 && lossStreak >= 2)
        cout << "ROUND STATUS: FORCE BUY / RECOVERY ROUND." << endl; 
    else if(lossStreak >= 3)
        cout << "ROUND STATUS: ECONOMY ROUND -- SAVE FOR FUTURE ROUNDS.";
    else
        cout << "ROUND STATUS: SAVE / PARTIAL BUY.";

    return 0;
}