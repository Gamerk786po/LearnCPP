#include <iostream>
using namespace std;

int main() {
    // Variables Initialization
    int next;
    int sum = 0;
    int n;
    // Input for n
    cout << "Enter n: ";
    cin >> n;
    int i = 1;
    sum += i; // First term 1 is added into sum
    cout << (i * i);
    // Since first term is already added iterate until n-1
    while( i < n){
        // negative square of next term adding into sum if i is odd 
        if(i % 2 != 0){
            cout << " - " << ((i+1) * (i+1));
            sum += -((i + 1) * (i+1));  
        }
        // positive square of next term adding into sum if i is odd
        else{
            cout << " + " << ((i+1) * (i+1));
            sum += ((i + 1) * (i+1));  
        }
        i++;
    }
    cout << endl;
    // Displaying final sum
    cout << "Sum: " << sum;
}