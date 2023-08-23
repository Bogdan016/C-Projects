#include <stdio.h>
#include <string.h>
#include <ctype.h>

/// Define a structure to hold Morse code mappings
typedef struct MorseCode
{
    char character;
    const char *code;
} MorseCode;

/// Morse code for letters, digits, and punctuation
const MorseCode morseMappings[] =
{
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
    {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
    {'Q', "--.-"}, {'R', ".-."},  {'S', "..."},  {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."}, {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},{'4', "....-"},
    {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {' ', " "}
};

void translateToMorse(const char *sentence)
{
    int len = strlen(sentence);
    for (int i=0; i<len; i++)   /// Loop through each character in the sentence
    {
        char upperChar = toupper(sentence[i]);  /// Convert the character to uppercase

        for (int j=0; j<sizeof(morseMappings)/sizeof(MorseCode); j++)   /// Loop through the Morse code mappings
        {
            if (upperChar == morseMappings[j].character)    /// If the uppercase character matches the Morse mapping
            {
                printf("%s ", morseMappings[j].code);   /// Print the Morse code equivalent
                break;
            }
        }
    }
}

int main()
{
    char sentence[100];

    printf("\n Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++)   /// Loop to remove the newline character
    {
        if (sentence[i] == '\n')
        {
            sentence[i] = '\0';     /// Replace newline with null terminator
            break;
        }
    }

    printf("\n Morse code translation: ");
    translateToMorse(sentence);
    puts("");
    return 0;
}
