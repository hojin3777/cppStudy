#include <stdio.h>

int main(void){
    int sum;
    for(int i = 1; i <= 1000; i++){
        if( i%3 == 0 || i%5 == 0)
            sum+=i;
    }
    printf("3 또는 5의 배수의 합: %d", sum);

    return 0;
}