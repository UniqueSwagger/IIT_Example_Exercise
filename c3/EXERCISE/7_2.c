// Write a program that prints'a table showing the proper amount 
// of tip to leave. Start the table at $1 and stop at $100, using 
// increments of SI. Compute three tip percentages: \0%, 15%, 
// and 20%. After each line, ask the user if he or she wants to 
// continue. If not, use break to stop the loop and end the program.

#include <stdio.h>

int main(void) {
    int i;
    float tip;

    for (i = 1; i <= 100; i++) {
        tip = i * 0.15;
        printf("Tip for $%d: %.2f\n", i, tip);
        printf("Continue? (y/n): ");
        if (getchar() == 'n') {
            break;
        }
        getchar();
    }

    return 0;
}