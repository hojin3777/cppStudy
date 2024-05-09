#include <stdio.h>
#include <stdlib.h>

int main(void){
    int input;
    printf("n입력: ");
    scanf("%d",&input);

    for(int i = 0; i < input; i++){
        for(int j = 0; j < input-1-i; j++){
            printf(" ");
        }
        for(int j = 0; j < i*2+1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}