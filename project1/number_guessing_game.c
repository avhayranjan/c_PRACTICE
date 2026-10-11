#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int num=(rand()%100+1);
    int num_guessed=0;
    int guessed;
    do{
        printf("guess the number:");
        scanf("%d", &guessed);
        if(guessed<num){
            printf("higher number please!!\n");
        }
        else if(guessed>num){
            printf("smaller number please!!\n");
        }
        else{
            printf("congrats!!\n");
        }
        num_guessed++;
    }while(guessed != num);
    printf("no. of guess made : %d\n", num_guessed);

    
    return 0;
}
