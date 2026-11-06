#include <iostream>
#include <cstdlib> // for srand()
#include <ctime>   // for time()
using namespace std;
int main (){
    // Variables Initializations
    int nOfQuestions;
    int score = 0;
    // Variables for storing random integers and answers
    int randomInt1;
    int randomInt2;
    int correctAnswer;
    int userAnswer;
    // Variables for storing operation information
    int operationNumber;
    char operation;
    srand(time(0)); // Setting the seed for rand
    // Counter control loop until nOfQuestions
    // Input nOfQuestions
    cout << "How many math questions do you want to generate? ";
    cin >> nOfQuestions;
    for(int i = 1; i <= nOfQuestions; i++){
        randomInt1 = (rand() % 10) + 1; // Generates a random integer1
        randomInt2 = (rand() % 10) + 1; // Generates a random integer2
        operationNumber = (rand() % 4) + 1; // Gemerating a random operation
        // Question Display and operation assignment
        switch(operationNumber){
            case 1:
                operation = '+';
                correctAnswer = randomInt1 + randomInt2;
                break;
            case 2:
                operation = '-';
                correctAnswer = randomInt1 - randomInt2;
                break;
            case 3:
                operation = '*';
                correctAnswer = randomInt1 * randomInt2;
                break;
            case 4:
                operation = '/';
                correctAnswer = randomInt1 / randomInt2;
                break;
        }
        // Input userAnswer
        cout << "Question " << i << ": " << randomInt1 << " " << operation << " " << randomInt2 << " = ?" << endl;
        cout << "Enter your answer: ";
        cin >> userAnswer;
        // SSelection Structure for checking userAnswer == correctAnswer 
        if(userAnswer == correctAnswer){
            cout << "Correct!" << endl;
            score++;
        }
        else{
            cout << "Incorrect. The correct answer is " << correctAnswer << endl;
        }
    }
    // Displaying final score out of nOfQuestions
    cout << "Your score = " << score << " out of " << nOfQuestions;
    return 0;
}