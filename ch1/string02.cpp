#include <iostream>
#include <string>

int main(){
    const char *cc = "문자열을 입력합니다. This is a string";
    std::string str; //string 타입 변수선언

    str = cc;
    std::cout << "str = " << str.data() << ", 문자열의 크기는 " << str.length() << std::endl;

    str = "클래스 내부에서 공간을 잡는다.";
    str += " 따라서 별도 메모리 공간을 잡지 않아도 사용이 가능하다."; //정수처럼 연산 가능
    std::cout << "str = " << str.data() << " 문자열의 크기는 " << str.length() << std::endl;

    std::string s0 = "Initial String";
    std::cout << "s0 : " << s0 << std::endl;
}