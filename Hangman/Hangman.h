#pragma once

/**
 * The maximum number of incorrect guesses allowed in the Hangman game.
**/
#define max_tries 10

/**
 * The maximum length of a word in the Hangman game.
**/
#define lenght 20

/**
 * The display function is used to print different stages of a Hangman figure based on the number of incorrect guesses (ig).
 * It visualizes the Hangman's progress as the player makes incorrect guesses, showing the Hangman being drawn step by step.
 * Each case in the switch statement corresponds to a different stage of the Hangman figure, from an empty frame to a fully drawn Hangman with a head, body, arms, and legs.
 *
 * @param ig The number of incorrect guesses.
**/
void display(int ig);

/**
 * The getRandomNumber function generates a random integer between the minimum and maximum values, inclusive.
 * It uses the rand() function to generate a random number and then applies a formula to ensure the generated number falls within the desired range.
 *
 * @param mini The minimum value of the range.
 * @param maxi The maximum value of the range.
 * @return A random integer between mini and maxi, inclusive.
**/
int getRandomNumber(int mini, int maxi);

/**
 * The getRandomWord function reads a file named "popular_words.txt" containing a list of words.
 * It attempts to open the file and read up to 200 words from it.
 * It then generates a random index within the range of the read words and returns a dynamically allocated copy of the randomly selected word.
 * If the file cannot be opened or no words are read, it returns NULL.
 *
 * @return A dynamically allocated copy of a randomly selected word from the file, or NULL if an error occurs.
**/
char *getRandomWord();
