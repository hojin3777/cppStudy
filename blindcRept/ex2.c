#include <stdio.h>
#include <stdlib.h>

int main(void){
    int random = rand()%9 + 1;
    int guess;

    while(1){
        printf("추측한 숫자 입력: ");
        scanf("%d", &guess);
        if(guess == random){
            printf("정답!");
            break;
        }
        if(guess > random)
            printf("down\n");
        else
            printf("up\n");
    }

    return 0;
}