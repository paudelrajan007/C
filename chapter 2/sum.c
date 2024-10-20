#include <stdio.h>

// Function declarations
void displayBoard();
int checkWin();
void markBoard(char mark);

// Global variables for the board and the current player's turn
char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int currentPlayer = 1;

int main() {
    int gameStatus;
    char mark;
    int choice;

    printf("Welcome to Tic-Tac-Toe!\n");

    do {
        displayBoard();
        currentPlayer = (currentPlayer % 2) ? 1 : 2;  // Toggle between player 1 and player 2
        printf("Player %d, enter a number (1-9): ", currentPlayer);
        scanf("%d", &choice);

        mark = (currentPlayer == 1) ? 'X' : 'O';  // Assign X or O based on the current player

        // Check if the chosen cell is valid
        if (choice >= 1 && choice <= 9 && board[choice - 1] == '0' + choice) {
            markBoard(mark);  // Mark the board with the player's mark
        } else {
            printf("Invalid move! Try again.\n");
            currentPlayer--;
        }

        gameStatus = checkWin();  // Check if there's a winner or tie
        currentPlayer++;

    } while (gameStatus == -1);  // Continue playing while the game is not over

    displayBoard();

    if (gameStatus == 1) {
        printf("==> Player %d wins!\n", --currentPlayer);
    } else {
        printf("==> It's a draw!\n");
    }

    return 0;
}

// Function to display the current state of the board
void displayBoard() {
    printf("\n");
    printf("%c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf("%c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf("%c | %c | %c \n", board[6], board[7], board[8]);
    printf("\n");
}

// Function to mark the board with X or O
void markBoard(char mark) {
    int choice;
    scanf("%d", &choice);
    board[choice - 1] = mark;
}

// Function to check if someone has won or the game is a draw
int checkWin() {
    // Check rows, columns, and diagonals for a win
    if ((board[0] == board[1] && board[1] == board[2]) ||
        (board[3] == board[4] && board[4] == board[5]) ||
        (board[6] == board[7] && board[7] == board[8]) ||
        (board[0] == board[3] && board[3] == board[6]) ||
        (board[1] == board[4] && board[4] == board[7]) ||
        (board[2] == board[5] && board[5] == board[8]) ||
        (board[0] == board[4] && board[4] == board[8]) ||
        (board[2] == board[4] && board[4] == board[6])) {
        return 1;  // Return 1 if there's a winner
    }

    // Check for a draw (i.e., all cells are filled and no winner)
    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            return -1;  // Return -1 if the game is still ongoing
        }
    }

    return 0;  // Return 0 if it's a draw
}
