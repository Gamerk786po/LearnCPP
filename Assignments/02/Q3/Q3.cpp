#include <iostream>
using namespace std;
int main()
{
    // Temporary Variable for calories burned per minute
    int calPerMin;
    // Flag Variable for valid intesnity
    bool valid = true;
    // Variable for caloriesBurned
    int totalCalBurned;
    // Variable for intensity and duration (in minutes)
    char intensity;
    int duration;
    // Taking input from user
    cout << "intensity = ";
    cin >> intensity;
    cout << "duration = ";
    cin >> duration;
    // Conditional Structure for Checking the intensity
    if (intensity == 'L')
    {
        // Calculation for totalCaloriesBurned
        calPerMin = 4;
        totalCalBurned = calPerMin * duration;
    }
    else if (intensity == 'M')
    {
        // Conditional Structure for duration
        if (duration <= 30)
        {
            calPerMin = 6;
            totalCalBurned = calPerMin * duration;
        }
        else if (duration > 30)
        {
            calPerMin = 7;
            totalCalBurned = calPerMin * duration;
        }
    }
    else if (intensity == 'H')
    {
        if (duration <= 20)
        {
            calPerMin = 10;
            totalCalBurned = calPerMin * duration;
        }
        else if (duration <= 45)
        {
            calPerMin = 12;
            totalCalBurned = calPerMin * duration;
        }
        else if (duration > 45)
        {
            calPerMin = 9;
            totalCalBurned = calPerMin * duration;
        }
    }
    else
    {
        cout << "Invalid intensity level";
        valid = false;
    }
    if (valid)
    {
        // Output totalCaloriesBurned
        cout << "Calories burned: " << totalCalBurned;
    }
    return 0;
}