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
#include <stdbool.h>
#include "questions.h"
#include "players.h"
#include "jeopardy.h"

// Put macros or constants here using #define
#define BUFFER_LEN 256
#define NUM_PLAYERS 4

// Put global environment variables here

// We implemented this function within the questions.c.
// Processes the answer from the user containing what is or who is and tokenizes it to retrieve the answer.
char* tokenize(char *input){
    char * tokens;
    printf("got muh inpuuutsss: %s \n", input);
    const char s[2] = " ";
    tokens = strtok(input, s);
    tokens = strtok(NULL, s);
    tokens = strtok(NULL, s);
    printf("final Token: %s \n", tokens);

};

// Displays the game results for each player, their name and final score, ranked from first to last place
void show_results(player *players, int num_players){
    for (int i = 0; i < num_players; i++){
        printf("Player: %s Score: %d", players[i].name, players[i].score);
    }
};


int main()
{
    // An array of 4 players, may need to be a pointer if you want it set dynamically
    player players[NUM_PLAYERS];
    
    // Input buffer and and commands
    char buffer[BUFFER_LEN] = { 0 };

    // Display the game introduction and initialize the questions
    initialize_game();

    // Prompt for players names
    for (int i = 0; i < NUM_PLAYERS; i++){
        players[i].score = 0;
        gets(players[i].name);
    }

    //Variable to check if all questions are answered. 
    bool cont = true;
    int turn = 0; 
    // Perform an infinite loop getting command input from users until game ends
    while (fgets(buffer, BUFFER_LEN, stdin) != NULL && cont)
    {
        cont = false;
        // Call functions from the questions and players source files
        for (int i = 0; i < NUM_QUESTIONS; i++)
        if (!questions[i].answered)
        cont = true;
        //Game Logic is executed. 
        //Display the remaining questions. 
        display_categories();
        //Select the category and value. 
        int selectedVal;
        printf("Enter the Value and Cateogry \n");
        char selectedCat [100];
        scanf("%d", &selectedVal);
        gets(selectedCat);
        printf(" %s, %d \n", selectedCat, selectedVal);
        //Display the question with the selected category and value. 
        display_question(selectedCat, selectedVal);
        //Get the player's answer. 
        printf("Please Provide Answer \n");
        char playerAns [100];
        gets(playerAns);
        char tokenizedAns[100];
        strcpy(tokenizedAns, tokenize(playerAns));
        printf("final token: %s \n", tokenizedAns);
        //Check if the answer is correct. 
        bool correct = valid_answer(selectedCat, selectedVal, tokenizedAns);
        //We use turn to keep track of turn and divide by the num players. The remainder is the current player. 
        if(correct){
            update_score(players, NUM_PLAYERS, players[turn % NUM_PLAYERS].name, selectedVal);
        }
        // Display the final results and exit
        turn ++;
        show_results(players, NUM_PLAYERS);
    }
    return EXIT_SUCCESS;
}
