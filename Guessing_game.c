#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("----------------------------------- \n");
    printf("welcome to the guessing game \n");
    printf("----------------------------------- \n");

    int sec = time(0);
    srand(sec);
    int big_number = rand();

    int secret_number = big_number % 100;

    int attempts = 0;
    int kick;
    int att_num_defined;
    
    printf("Define the number of attempts \n");
    scanf("%d", &att_num_defined);

    printf("----------------------------------- \n");

    while (attempts < att_num_defined) {
        printf("Insert an attempt for secret number \n");
        scanf("%d", &kick);
        printf("Your attempt was %d \n", kick);
        printf("\n");

        if (kick == secret_number) {
            printf("Congratulations! The secret number is %d \n", secret_number);
            break;
        } else if (kick < secret_number) {
            printf("The secret number is greater than %d \n", kick);
        } else {
            printf("The secret number is smaller than %d \n", kick);
        }
        attempts++;
    }
    return 0;
}

