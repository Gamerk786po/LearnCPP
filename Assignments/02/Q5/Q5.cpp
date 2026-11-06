#include <iostream>
using namespace std;
int main()
{
    // Initialization of modifiedN and rightMost
    int modifiedN = 0, rightMost;
    // Taking a six digit number as input
    int n;
    cout << "Input: ";
    cin >> n;
    // Dropping 6th digit
    rightMost = n % 10;
    n = n / 10;
    // Checking rightMost % 2 == 0
    if(rightMost % 2 == 0 ){
        // Checking for overflow
        if(n+1 >= 100000){
            n -= 2;
        }else{
            n++;
        }
    } // If rightMost % 2 != 0 
    else if(rightMost % 2 != 0){
        n--;
    }

    // Dropping 5th digit
    rightMost = n % 10;
    n = n / 10;
    // Checking rightMost % 2 == 0
    if(rightMost % 2 == 0 ){
        // Checking for overflow
        if(n+1 >= 10000){
            n -= 2;
        }else{
            n++;
        }
    } // If rightMost % 2 != 0 
    else if(rightMost % 2 != 0){
        n--;
    }
    
    // Dropping 4th digit
    rightMost = n % 10;
    n = n / 10;
    // Checking rightMost % 2 == 0
    if(rightMost % 2 == 0 ){
        // Checking for overflow
        if(n+1 >= 1000){
            n -= 2;
        }else{
            n++;
        }
    } // If rightMost % 2 != 0 
    else if(rightMost % 2 != 0){
        n--;
    }

    // Dropping 3rd digit
    rightMost = n % 10;
    n = n / 10;
    // Checking rightMost % 2 == 0
    if(rightMost % 2 == 0 ){
        // Checking for overflow
        if(n+1 >= 100){
            n -= 2;
        }else{
            n++;
        }
    } // If rightMost % 2 != 0 
    else if(rightMost % 2 != 0){
        n--;
    }

    // Dropping 2nd digit
    rightMost = n % 10;
    n = n / 10;
    // Checking rightMost % 2 == 0
    if(rightMost % 2 == 0 ){
        // Checking for overflow
        if(n+1 >= 10){
            n -= 2;
        }else{
            n++;
        }
    } // If rightMost % 2 != 0 
    else if(rightMost % 2 != 0){
        n--;
    }
    // Displaying Final result
    cout << "The final result is " << n;

    return 0;
}