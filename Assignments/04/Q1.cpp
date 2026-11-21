#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // matches and runs array are parallel to each other. Respective Values are stored
    const int SIZE = 20;
    int matches[SIZE] = {};
    // Writing matches array 1 to 20
    for(int i = 0; i < SIZE; i++){
        matches[i] = i + 1;
    }
    int runs[SIZE] = {0};
    // Take input for the number of matches and validate 1 <= n <= 20
    int n;
    do{
        cout << "Enter number of matches(max 20): ";
        cin >> n;
        if(1 <= n && n <= 20)
            break;
    }while(true);
    // Writing runs array
    int run;
    cout << "Enter runs scored in " << n << " match: ";
    for(int i = 0; i < n; i++){
        // Validate if run is negative or not
        do{
            cin >> run;
            if(run >= 0)
                break;
            cout << "Enter runs scored in match " << i + 1 << " again: ";
        }while(true);
        runs[i] = run;
    }
    // Calculating and displaying totalRuns and battingAvg
    int totalRuns = 0; double battingAvg;
    for(int i = 0; i < n; i++){
        totalRuns += runs[i];
    }
    battingAvg = static_cast<double>(totalRuns)/n;
    cout << "Total run: " << totalRuns << endl;
    cout << "Batting average: " << fixed << setprecision(2) << battingAvg << endl;
    // Finding index for highest and lowest run in the runs array which is
    // parrallel to matches array
    int highestIndex = 0, lowestIndex = 0;
    for(int i = 1; i < n; i++){
        if(runs[i] < runs[lowestIndex])
            lowestIndex = i;
        if(runs[i] > runs[highestIndex])
            highestIndex = i;
    }
    cout << "Highest score: " << runs[highestIndex] << " (Match " << matches[highestIndex] << ")" << endl;
    cout << "Lowest score: " << runs[lowestIndex] << " (Match " << matches[lowestIndex] << ")" << endl;
    // Calculating counts
    int ducks = 0, fifties = 0, centuries = 0, matchesAvgAbove = 0;
    for(int i = 0; i < n; i++){
        if(runs[i] == 0)
            ducks++;
        else if(50 <= runs[i] && runs[i] <= 99)
            fifties++;
        else if(100 <= runs[i])
            centuries++;
        if(runs[i] > battingAvg)
            matchesAvgAbove++;
    }
    cout << "Fifties: " << fifties << endl;
    cout << "Centuries: " << centuries << endl;
    cout << "Ducks: " << ducks << endl;
    cout << "Matches above average: " << matchesAvgAbove << endl;
    return 0;
}