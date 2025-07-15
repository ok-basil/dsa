#include <iostream>
using namespace std;

void count_vowels_and_consonants(char A[]);
void count_words(char A[]);
void change_case(char A[]);

int main() {
    char A[] = "How are you";

    count_vowels_and_consonants(A);
    count_words(A);
    change_case(A);

    return 0;
}

// Function to count vowels and consonants in a string
void count_vowels_and_consonants(char A[])
{
    int i, vcount = 0, ccount = 0;

    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
        {
            vcount++;
        }
        else if ((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z'))
        {
            ccount++;
        }
    }

    cout << "Vowels: " << vcount << endl;
    cout << "Consonants: " << ccount << endl;
}

// Function to count words in a string
void count_words(char A[])
{
    int i, word = 1;
    
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
        {
            word++;
        }
    }

    cout << "Words: " << word << endl;
}

// Function to change the case of the string
void change_case(char A[])
{
    int i = 0;

    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 'A' && A[i] <='Z')
        {
            A[i] += 32;
        }
        else if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] -= 32;
        }
    }

    cout << "Changed case is " << A << endl;
}