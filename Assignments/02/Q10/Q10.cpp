#include <iostream>
using namespace std;
int main()
{
    // Variable for choice
    char choice;
    // Variable for two registers (AL and BL)
    int AL, BL;
    // Variable for result
    int result;
    // Flags
    bool ZF = 0;
    bool SF = 0;
    bool CF = 0;
    // Flag for validInstruction
    bool validInstruction = true;
    // Input Registers from user
    cout << "Enter AL (0-255): ";
    cin >> AL;
    cout << "Enter BL (0-255): ";
    cin >> BL;
    // Checking if AL and BL are in range
    if (AL > 255 || AL < 0 || BL > 255 || BL < 0)
        cout << "Invalid Input!" << endl;
    else
    {
        // Input Instruction
        cout << "Enter instruction (1-ADD 2-SUB 3-AND 4-SHL): ";
        cin >> choice;
        // Conditional Structure switch for choice
        switch (choice)
        {
        case '1':
            result = AL + BL;
            if (result > 255) // Condition for flag ADD
                CF = 1;
            break;
        case '2':
            result = AL - BL;
            if(AL < BL) // Condition for flag SUB
                CF = 1;
            break;
        case '3':
            result = AL & BL; // Condition for flag AND
            CF = 0;
            break;
        case '4':
            result = AL << 1; // Condition for flag SHL
            if(AL >= 128)
                CF = 1;
            break;
        default:
            validInstruction = false;
            cout << "Invalid Instruction!" << endl;
        }
        if (validInstruction)
        {
            // Wrapping up Result
            if (result > 255 || result < 0)
            {
                result %= 256;
                if (result < 0)
                {
                    result += 256;
                }
            }
            // Conditional Structure for flags (ZF and SF)
            if (result == 0)
                ZF = 1;
            if(result >= 128)
                SF = 1;
            // Displaying Final Output
            cout << "Result: " << result << endl;
            cout << "ZF=" << ZF << " SF=" << SF << " CF=" << CF;
        }
    }
    return 0;
}