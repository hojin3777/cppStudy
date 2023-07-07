//구조체나 클래스의 변수나 객체를 초기화시키는 예
#include <iostream>
#include <cstdio>
#include <cstring>

struct Data{

    //사용자 정의 생성자
    Data(int a, const char *n, int b){
        age = a;
        strcpy(name, n);
        balance = b;
    }
    Data(){ //컴파일러가 만드는 디폴트 생성자
        age = 0;
        memset(name, 0, 100);
        balance = 0;
    }
    //생성자 끝

    int age;
    char name[100];
    int balance;
};

void Print(Data user){
    std::cout << user.age << ", " << user.name << ", 잔 액 : " << user.balance << std::endl;
}

int main(){
    // Data user01 = 21; 구조체나 클래스는 리터럴로 초기화 불가
    Data user02(33, "이순신", 20000); //생성자가 없어 이런식으로 초기화 불가
    Print(user02);

    Data user03{53, "강감찬", 45000};
    Print(user03);

    Data user04 = Data(45, "이성계", 60000); //user02와 같은 에러, 같은 해결방법
    Print(user04);

    // Data user05(); 무명 변수가 가능은 하나 ISO에서 금지하는 방식
    Data *user05 = new Data(60, "연개소문", 50000);
    Print(*user05);

    Data user06 = Data(); //데이터 타입에 따라 자동 초기화
    Print(user06);

    Data user07 = {21, "홍길동", 10000}; //C의 구조체와 같은 방식
    Print(user07);

    Data user08;    //임의 값으로 초기화
    Print(user08);

    Data *user_08 = new Data;   //위 경우와 동일하게 임의 값으로 초기화
    Print(*user_08);

    Data *user09 = new Data();  //자동 초기화
    Print(*user09);

}