#include <iostream>
#include <iomanip>
#include <locale>

void showDate(int m, int d, int y){
    std::cout << std::setfill('0'); //문자 여백 0으로 채우기
    std::cout << std::setw(2) << m << '/' //데이터폭 2자
              << std::setw(2) << d << '/'
              << std::setw(4) << y << std::endl; //데이터폭 4자
    std::cout << std::endl;
}

int main(){
    double f = 3.14159265368979;
    std::cout << f << std::endl; //원주율을 defaultfloat로 출력, 6자리에서 반올림하여 5자리 출력

    double x = 800000.0/81.0;
    std::cout << std::fixed << std::setprecision(2) << x << std::endl; //fixed-실수고정소수자리, setprecision(n)-n자리 소수점

    x = 2.0/3.0;
    std::cout << std::fixed << std::setprecision(4) << x << "\n" << std::endl;

    showDate(7,2,2023);

    unsigned long x0 = 64206;
    std::cout << x0 << std::showbase //showbase-진법표시
              << " 8진법은 \"" << std::oct << x0 << "\""
              << " 16진법은 \"" << std::hex << x0 << "\"" << std::endl;
    std::cout << std::endl;
}