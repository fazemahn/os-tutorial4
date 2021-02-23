/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <GROUP MEMBERS>
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questions.h"

// Initializes the array of questions for the game
void initialize_game(void)
{
    strcpy(questions[0].category, categories[0]);
    strcpy(questions[0].question, "What language is Linux written in?");
    strcpy(questions[0].answer, "C");
    questions[0].value = 100;
    questions[0].answered = false;

    strcpy(questions[1].category, categories[0]);
    strcpy(questions[1].question, "What's the most popular language?");
    strcpy(questions[1].answer, "Javascript");
    questions[1].value = 200;
    questions[1].answered = false;

    strcpy(questions[2].category, categories[0]);
    strcpy(questions[2].question, "What language is emacs written in?");
    strcpy(questions[2].answer, "Emacs Lisp");
    questions[2].value = 300;
    questions[2].answered = false;

    strcpy(questions[3].category, categories[0]);
    strcpy(questions[3].question, "What is the relationship between Java and Javascript??");
    strcpy(questions[3].answer, "Only some syntax. They are unrelated.");
    questions[3].value = 500;
    questions[3].answered = false;
    // initialize each question struct and assign it to the questions array
    
    
    // Part 3
    strcpy(questions[8].category, categories[2]);
    strcpy(questions[8].question, "What does DBMS stand for?");
    strcpy(questions[8].answer, "Database Management System");
    questions[8].value = 100;
    questions[8].answered = false;

    strcpy(questions[9].category, categories[2]);
    strcpy(questions[9].question, "What does SQL stand for ?");
    strcpy(questions[9].answer, "Structured Query language");
    questions[9].value = 200;
    questions[9].answered = false;


    strcpy(questions[10].category, categories[2]);
    strcpy(questions[10].question, "What are Primary keys unique for each tables?");
    strcpy(questions[10].answer, "YES");
    questions[10].value = 300;
    questions[10].answered = false;

    strcpy(questions[11].category, categories[2]);
    strcpy(questions[11].question, "What is a 'tuple'?");
    strcpy(questions[11].answer, "a tuple is one record in a row");
    questions[11].value = 500;
    questions[11].answered = false;
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    // print categories and dollar values for each unanswered question in questions array
}

// Displays the question for the category and dollar value
void display_question(char *category, int value)
{

}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char *category, int value, char *answer)
{
    // Look into string comparison functions
    return false;
}

// Returns true if the question has already been answered
bool already_answered(char *category, int value)
{
    // lookup the question and see if it's already been marked as answered
    return false;
}
