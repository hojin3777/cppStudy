#include <iostream>
#include <cstdio>

int main(){
    int a = 10;
    std::cout << "a : " << a << std::endl;
    
    int b(20);
    std::cout << "b : " << b << std::endl;

    int c{30};
    std::cout << "c : " << c << std::endl;

    int d = int(40);    //int(40)은 무명변수 - 문장완료 후 삭제
    std::cout << "d : " << d << std::endl;

    int e();    //빈 인수는 원칙적으로 허용X
    if(e) std::cout << "e : " << e << std::endl;

    int f = int();  //무명 변수 0으로 초기화
    std::cout << "f : " << f << std::endl;

    int g = {50};
    std::cout << "g : " << g << std::endl;

    int *h = new int;   //new 연산자로 메모리 저장소 생성 수 변수할당
    //int *h = (int *) malloc(sizeof(int))와 동일
    std::cout << "*h : " << *h << std::endl;

    int *i = new int(); //포인터가 가리키는 저장소 자동 초기화
    std::cout << "*i : " << *i << std::endl;

    int *j = new int(60);   //j포인터가 가리키는 저장소 60으로 초기화
    std::cout << "*j : " << *j << std::endl;

    bool ok = true; //boolalpha 1 => true
    std::cout << std::boolalpha << ok << " " << std::noboolalpha << ok << std::endl;    
}