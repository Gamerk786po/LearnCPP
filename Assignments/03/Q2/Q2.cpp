#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    // Variables Initialization
    int n; // positive integer from user
    int numinator;
    int denominator;
    float sum = 0;
    // Input n
    cout << "Enter n: ";
    cin >> n;
    // Counter control loop until n
    for(int i = 1; i <= n; i++){
        numinator = i;
        denominator = i + 1;
        // displaying the sequence
        cout << numinator << "/" << denominator;
        (i == n) ?  cout << "" : cout << " + ";
        sum += static_cast<float>(numinator)/denominator; 
    }
    cout << endl;
    // Displaying the final sum
    cout << "Sum: " << fixed << setprecision(4) << sum;
    return 0;
}