#include <stdio.h>

int main(void){
    int sum, input;
    printf("숫자 n 입력: ");
    scanf("%d", &input);

    for(int i = 1; i <= input; i++){
        sum += i;
    }
    printf("1부터 %d까지의 합: %d", input, sum);

    return 0;
}

