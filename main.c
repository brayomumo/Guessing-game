#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userInput, randomNumber,trials,j,i, players;
    printf("Enter number of players\n");
    scanf("%d", &players);

    for (i =0;i<players; i++){
    printf("player %d\n", i+1);
    srand(time(NULL));
    randomNumber = rand()% 100 + 1;

        printf("Enter the number of trials\n");
        scanf("%d", &trials);
        for (j =0; j< trials; j++){


    printf("Guess the generated number\n");
    scanf("%d", &userInput);
    if(userInput < randomNumber){
        printf("Your  guess is too low\n");
    }else if(userInput > randomNumber){
    printf("Your guess is too low\n");
    }else if( userInput = randomNumber){
    printf("Correct guess");
    }
    //printf("%d\n", randomNumber);
        }

    }


}
