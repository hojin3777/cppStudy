#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;
    for(a=1; a<15; a++){
        for(b=1; b<a; b++){
            for(c=1; c<b; c++){
                if(a+b+c == 15)
                    printf("%d + %d + %d = 15\n", a, b, c);
            }
        }
    }

    return 0;
}