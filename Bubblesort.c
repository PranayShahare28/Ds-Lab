/* Bubble Sort:
write a game developement programme that implies the bubble sort algorithm . the program will
simulate a simulate a simple game where player can a set of numbers and the algoritm of bubble sort will 
sort players score in ascending order*/


#include <stdio.h>

int main() {
    int n;
    printf("Enter the No. of scores for players : ");
    scanf("%d", &n);

    int player1[n], player2[n];

    printf("\nEnter scores for Player 1:\n");
    for (int i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &player1[i]);
    }

    printf("\nEnter scores for Player 2:\n");
    for (int i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &player2[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (player1[j] > player1[j + 1]) {
                int temp = player1[j];
                player1[j] = player1[j + 1];
                player1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (player2[j] > player2[j + 1]) {
                int temp = player2[j];
                player2[j] = player2[j + 1];
                player2[j + 1] = temp;
            }
        }
    }

    printf("\nPlayer 1 sorted Score (Ascending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("Level %d Score: %d\n", i + 1, player1[i]);
    }

    printf("\nPlayer 2 sorted Score (Ascending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("Level %d Score: %d\n", i + 1, player2[i]);
    }

    return 0;
}
