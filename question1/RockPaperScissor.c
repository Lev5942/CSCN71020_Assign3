//Function for rock, paper, and scissors to determine if player 1 or 2 is the winnner, draw, or their input is invalid
//Vinh - fall23 - CSCN71020 - assignment 3


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* rockPaperScissor(const char* player1, const char* player2) {

	printf("Welcome to the game of Rock Paper Scissor\n");
	printf("For the option either choose Rock or Paper or Scissor\n");

	//invalid output and return
	if (!(strcmp(player1, "Rock") == 0 || strcmp(player1, "Paper") == 0 || strcmp(player1, "Scissors") == 0)) {
		printf("Invalid");
		return "Invalid";
	}
	if (!(strcmp(player2, "Rock") == 0 || strcmp(player2, "Paper") == 0 || strcmp(player2, "Scissors") == 0)) {
		printf("Invalid");
		return "Invalid";
	}

	//check for draw if not check for who is the winner
	if (strcmp(player1, player2) == 0) {
		printf("Draw");
		return "Draw";
	}
	else if (
		strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0 ||
		strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0 ||
		strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0
		) {
		printf("Player 1 is the Winner!");
		return "Player1";
	}
	else {
		printf("Player 2 is the Winner!");
		return "Player2";
	}

	return "No Results";
}