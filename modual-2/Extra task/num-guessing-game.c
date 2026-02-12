#include <stdio.h>

main() {
    int num, guess, i;

    num = 50;
    guess = i;

    printf("Guess number (1 to 100). You have 5 chances.\n");

    for (i = 1; i <= 5; i++) {
        printf("Enter guess: ");
        scanf("%d", &guess);

        if (guess == num) {
            printf("Correct! You win.\n");
            return 0;
        }
        else if (guess < num)
            printf("Too low\n");
        else
            printf("Too high\n");
    }

    printf("You lost. Number was %d\n", num);

}

