#pragma once

typedef struct {
    char *question;
    char *options;
    char correctAnswer;
    char *explanation;
} Question;

void display(Question q, int *score);
