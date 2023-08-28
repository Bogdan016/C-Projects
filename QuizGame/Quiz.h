#pragma once

typedef struct {
    const char *question;
    const char *options;
    char correctAnswer;
    const char *explanation;
} Question;

void displayQuestion(const Question *q, int *score);
