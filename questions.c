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
    // initialize each question struct and assign it to the questions array
    
    //category 1
    
    strcpy(questions[0].category, categories[0]);
    strcpy(questions[0].question, "This is the language Linux is written in.");
    strcpy(questions[0].answer, "What is C language?");
    questions[0].value = 100;
    questions[0].answered = false;

    strcpy(questions[1].category, categories[0]);
    strcpy(questions[1].question, "This is the most popular language.");
    strcpy(questions[1].answer, "What is Javascript?");
    questions[1].value = 200;
    questions[1].answered = false;

    strcpy(questions[2].category, categories[0]);
    strcpy(questions[2].question, "This is the language Emacs is written in.");
    strcpy(questions[2].answer, "What is Emacs Lisp");
    questions[2].value = 300;
    questions[2].answered = false;

    strcpy(questions[3].category, categories[0]);
    strcpy(questions[3].question, "This is the organization that specifies CSS.");
    strcpy(questions[3].answer, "What is the CSS Working Group?");
    questions[3].value = 500;
    questions[3].answered = false;
    
     //category 2
    
    strcpy(questions[4].category, categories[1]);
    strcpy(questions[4].question, "It is known as the best algorithm for sorting");
    strcpy(questions[4].answer, "What is Quick Sort?");
    questions[4].value = 100;
    questions[4].answered = false;
    
    strcpy(questions[5].category, categories[1]);
    strcpy(questions[5].question, "A sorting algorithm that is based on the divide and conquer technique.");
    strcpy(questions[5].answer, "What is Merge Sort?");
    questions[5].value = 200;
    questions[5].answered = false;
    
    strcpy(questions[6].category, categories[1]);
    strcpy(questions[6].question, "A greedy algorithm that finds a minimum spanning tree for a weighted undirected graph.");
    strcpy(questions[6].answer, "Prim's Algorithm");
    questions[6].value = 300;
    questions[6].answered = false;
    
    strcpy(questions[7].category, categories[1]);
    strcpy(questions[7].question, "An algorithm for traversing or searching tree or graph data structures");
    strcpy(questions[7].answer, "What is Depth-first search (DFS) ");
    questions[7].value = 500;
    questions[7].answered = false;
  
    // category 3

   strcpy(questions[8].category, categories[2]);
    strcpy(questions[8].question, "Properties that describe the characteristics of entities are called?");
    strcpy(questions[8].answer, "what are attributes?");
    questions[8].value = 100;
    questions[8].answered = false;

    strcpy(questions[9].category, categories[2]);
    strcpy(questions[9].question, "This language used to process Query and create/edit tables?");
    strcpy(questions[9].answer, "Structured Query language");
    questions[9].value = 200;
    questions[9].answered = false;


    strcpy(questions[10].category, categories[2]);
    strcpy(questions[10].question, "The key used to identify a single row in a tabel?");
    strcpy(questions[10].answer, "Definiation of Primary key");
    questions[10].value = 300;
    questions[10].answered = false;

    strcpy(questions[11].category, categories[2]);
    strcpy(questions[11].question, "What is one record in a row?");
    strcpy(questions[11].answer, "A tuple");
    questions[11].value = 500;
    questions[11].answered = false;
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    for (int i =0; i<NUM_QUESTIONS; i++){
        if (!questions[i].answered){
            printf("%s : %d", questions[i].question, questions[i].value);
        }
    }
    // print categories and dollar values for each unanswered question in questions array
}

// Displays the question for the category and dollar value
void display_question(char *category, int value)
{
    if (strcmp(categories[0], category) == 0){
        for (int i = 0; i<4; i++){
            if (!questions[i].answered && questions[i].value == value)
            printf("%s", questions[i].question);
        }
    } 
    else if (strcmp(categories[1], category) == 0){
    }
    else if (strcmp(categories[2], category) == 0){
    }
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
