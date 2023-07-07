#include <cstring>
#include <cstdlib>
#include <iostream>

int main(){
    const char *cc = "문자열을 입력합니다. This is a string";
    char cb[17];
    char *str;

    memcpy(cb, cc, 17); //메모리 복사(받는대상, 복사대상, 크기)
                        // strcpy(cb, cc); //메모리 공간 초과로 에러
    str = (char *) malloc(strlen(cc) + 1); //malloc-메모리 동적할당
    strcpy(str,cc);

    std::cout << "cc = " << cc << ", 문자열의 크기는 " << strlen(cc) << std::endl;
    std::cout << "cb = " << cb << ", 문자열의 크기는 " << strlen(cb) << std::endl;
    std::cout << "str = " << str << ", 문자열의 크기는 " << strlen(str) << std::endl;
    free(str); //할당해제
}