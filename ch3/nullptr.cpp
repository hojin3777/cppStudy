#include <cstddef>
#include <iostream>

void f(int* pi){
    std::cout << "정수를 가리킨다.\n";
}
void f(double * pd){
    std::cout << "실수를 가리킨다.\n";
}
void f(std::nullptr_t nullp){
    std::cout << "null 포인터이다.\n";
}

int main(){
    int* pi = new int();
    double* pd = new double();

    f(pi);
    f(pd);
    f(nullptr);
    // f(NULL); //위 3개 함수 모두 출력해 에러 발생

    delete pi;
    delete pd;
}