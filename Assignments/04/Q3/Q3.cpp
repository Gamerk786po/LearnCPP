#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    // Code for counting
    int words = 0, vowels = 0, consonants = 0, spaces = 0;
    int wordlen = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            spaces++;
            if (wordlen > 0)
                words++;
            wordlen = 0;
            continue;
        }
        switch (sentence[i])
        {
        case 'A':
        case 'a':
            vowels++;
            break;
        case 'E':
        case 'e':
            vowels++;
            break;
        case 'I':
        case 'i':
            vowels++;
            break;
        case 'O':
        case 'o':
            vowels++;
            break;
        case 'U':
        case 'u':
            vowels++;
            break;
        default:
            consonants++;
        }
        wordlen++;
    }
    /*
    Last word can be missed because it ends with a null character
    so if wordslen is still greater than 0
    */
    if (wordlen > 0)
    {
        words++;
    }
    cout << "Words: " << words << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Spaces: " << spaces << endl;

    // Code for tracking longestWord
    words = 0;
    wordlen = 0;
    int longestWordLen = 0;
    string longestWord = "";
    string currentWord = "";
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ') // A word ends with a space
        {
            if (wordlen > 0)
                words++;
            if (words == 1) // If its first word
            {
                longestWordLen = wordlen;
                longestWord = currentWord;
            }
            else if (wordlen > longestWordLen)
            {
                longestWordLen = wordlen;
                longestWord = currentWord;
            }
            // Reset values after a word
            wordlen = 0;
            currentWord = "";
            continue;
        }
        // track current word and it's len
        currentWord += sentence[i];
        wordlen++;
    }
    /*
    Last word can be missed because it ends with a null character
    so if wordslen is still greater than 0
    */
    if (wordlen > 0)
    {
        if (wordlen > longestWordLen)
        {
            longestWordLen = wordlen;
            longestWord = currentWord;
        }
    }
    cout << "Longest Word: " << longestWord << " (" << longestWordLen << " letters)" << endl;

    // Code for detecting a palindrome
    string reversedSentence = ""; // reversedSentence
    string currentSentence = "";  // currentSentence
    // from zero to length - 1
    for (int i = 0; i < sentence.length(); i++)
    {
        if ((65 <= sentence[i] && sentence[i] <= 90) || (97 <= sentence[i] && sentence[i] <= 122))
        {
            if (65 <= sentence[i] && sentence[i] <= 90)
                currentSentence += (sentence[i] + 32);
            else
                currentSentence += sentence[i];
        }
    }
    // from length - 1 to zero
    for (int i = sentence.length() - 1; i >= 0; i--)
    {
        if ((65 <= sentence[i] && sentence[i] <= 90) || (97 <= sentence[i] && sentence[i] <= 122))
        {
            if (65 <= sentence[i] && sentence[i] <= 90)
                reversedSentence += (sentence[i] + 32);
            else
                reversedSentence += sentence[i];
        }
    }
    cout << "Palindrome (ignoring spaces and case): ";
    cout << ((currentSentence == reversedSentence) ? "Yes" : "No");
    cout << endl;
    return 0;
}