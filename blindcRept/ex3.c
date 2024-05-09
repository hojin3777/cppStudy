#include <stdio.h>
#include <stdlib.h>

int main(void){
    int random = rand()%9 + 1;
    int guess;

    do{
        printf("추측한 숫자 입력: ");
        scanf("%d", &guess);
        
        if(guess == random)
            printf("정답!\n");
        else if(guess > random)
            printf("down\n");
        else
            printf("up\n");
    } while(guess != random);

    return 0;
}