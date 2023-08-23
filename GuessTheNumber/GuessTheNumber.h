#pragma once

/**

saveHighScore writes player's score as high score in a difficulty-specific file.
If successful, updates stored high score; if not, displays error message.

@param score The player's score to be saved.
@param difficulty The difficulty level for which the score is saved.

**/

void saveHighScore(int score, int difficulty);

/**

loadHighScore retrieves the high score from a difficulty-specific file.
It reads the stored score from the file and returns it.
If file read fails or doesn't exist, returns default score (0).

@param difficulty The difficulty level for which the score is loaded.
@return The loaded high score.

**/

int loadHighScore(int difficulty);

/**

Difficulty sets the lower and upper bounds based on the chosen difficulty level.

@param difficulty The chosen difficulty level.
@param l A pointer to the lower bound of the number range.
@param u A pointer to the upper bound of the number range.

**/

void Difficulty(int difficulty, int *l, int *u);
