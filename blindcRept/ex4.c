#include <stdio.h>

int main(void){
    for(int i=1; i<101; i++){
        if(i%5==0)
            continue;
        printf("%02d ",i);
    }

    return 0;
}