#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string.h>
/* Ishani Chakraborty
Homework 9
Creates a program that asks user 
to enter a string of characters, 
then computes and displays the number
of occurrences of the vowel letters
*/

using namespace std;
int countVowels(int counts[ ], char inputStr[ ], int vowelCnt);
void displayCounts(const string text[ ], int counts[ ], int vowelCnt);
int main()
{
    const int VOWEL_CNT = 5;
    const int SIZE = 300;

    const string VOWELS_TEXT [VOWEL_CNT] = { "a - A", "e - E", "i - I", "o - O", "u - U" };

    char str[SIZE]; 
    int vowelCnt[VOWEL_CNT]; 
    
    cout << "This program counts the vowel occurrences in input phrase\n";
    cout << "Enter a phrase (max length " << SIZE - 1 << "): ";
    cin.getline (str, SIZE);
    int totalCount;
    
    while (strlen(str) != 0) {
        // TO DO: Invoke the function countVowels with 3 parameters using the variables and constants defined above.
        totalCount = countVowels(vowelCnt, str, VOWEL_CNT); 
        // TO DO: Invoke the function displayCounts with 3 parameters using the variables and constants defined above.
        displayCounts(VOWELS_TEXT, vowelCnt, VOWEL_CNT);
        cout << "Total of vowels is " << totalCount << endl << endl;
        cout << "Enter a phrase (maximum length " << SIZE - 1 << "): ";
        cin.getline (str, SIZE);
    }
        return 0;
}

int countVowels(int counts[ ], char inputStr[ ], int vowelCnt) {
    for (int i = 0; i < vowelCnt; i++) {
        counts[i] = 0;
    }

    for(int i = 0; i < strlen(inputStr); i++) {
        if(inputStr[i] == 'A' || inputStr[i] == 'a') {
            counts[0]++;
        } else if(inputStr[i] == 'E' || inputStr[i] == 'e') {
            counts[1]++;
        } else if(inputStr[i] == 'I' || inputStr[i] == 'i') {
            counts[2]++;
        } else if(inputStr[i] == 'O' || inputStr[i] == 'o') {
            counts[3]++;
        } else if(inputStr[i] == 'U' || inputStr[i] == 'u') {
            counts[4]++;
        }
    }
    int totalCounts = 0;
    for (int i = 0; i < vowelCnt; i++) {
        totalCounts += counts[i];
    }
    return totalCounts;
}


void displayCounts(const string text[ ], int counts[ ], int vowelCnt)
{
    int max = 0;
    string vowel = "";
    char arr[5] ={ 'A', 'E', 'I', 'O', 'U'};
    cout << "Vowel\t\tCount\n" << endl;
    for(int i = 0; i < vowelCnt; i++) {
        cout << text[i] << "\t\t" << counts[i] << endl;
        if (max < counts[i]) {
            max = counts[i];
            vowel = arr[i];
        }
    }
    cout << "Vowel with highest occurence is " << vowel << endl << endl;
}