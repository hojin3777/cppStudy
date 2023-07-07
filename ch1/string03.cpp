#include <iostream>

int main(){
    std::string s0 ("Initial string");
    
    std::string s1;
    std::string s2(s0); //s0 복사
    std::string s3(s0, 8, 3); //s0 8자리(9번째)부터 3개문자
    std::string s4(s0, 6); //s0 7자리부터
    std::string s5(10, 'x'); //x 10개 반복

    std::cout << "s1 : " << s1.data() << std::endl;
    std::cout << "s2 : " << s2.data() << std::endl;
    std::cout << "s3 : " << s3.data() << std::endl;
    std::cout << "s4 : " << s4.data() << std::endl;
    std::cout << "s5 : " << s5.data() << std::endl;
}