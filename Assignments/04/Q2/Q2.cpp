#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    cout << "Enter a password: ";
    getline(cin, password);
    int len = password.length();
    cout << "Length: " << len << endl;
    cout << "Hidden password: ";
    for (int i = 0; i < len; i++)
    {
        cout << "*";
    }
    cout << endl;
    // Setting up counters
    int uC = 0, lC = 0, s = 0, d = 0;
    char character;
    // loop to count
    for (int i = 0; i < len; i++)
    {
        character = password[i];
        if (65 <= character && character <= 90)
            uC++;
        else if (97 <= character && character <= 122)
            lC++;
        else if (48 <= character && character <= 57)
            d++;
        else
            s++;
    }
    cout << "Uppercase letters: " << uC << endl;
    cout << "Lowercase letters: " << lC << endl;
    cout << "Digits: " << d << endl;
    cout << "Special characters: " << s << endl;

    // Calculating points for the password
    int totalP = 0;
    if (len >= 8)
        totalP++;
    if (uC >= 1)
        totalP++;
    if (lC >= 1)
        totalP++;
    if (s >= 1)
        totalP++;
    if (d >= 1)
        totalP++;
    cout << "Points " << totalP << " out of 5" << endl;
    cout << "Password strength: ";
    switch (totalP)
    {
    case 5:
        cout << "Strong";
        break;
    case 3:
    case 4:
        cout << "Medium";
        break;
    case 0:
    case 1:
    case 2:
        cout << "Weak";
        break;
    }
    cout << endl;
    return 0;
}