#include <iostream>
#include <string>

int general(int i){
    return i >= 0 ? i : -i;
}

#define unsafe(i) ( (i) >= 0 ? (i) : -(i)) //C에서 제공하는 매크로 함수.

inline int safe(int i){ //인라인 함수
    return i>=0 ? i : -i;
}
constexpr int expr(int i){ //상수표현식
    return i>=0 ? i : -i;
}

int main(){
    int ans, x=0;
    {
        ans = (x>=0) ? x : -x; //인라인 함수와 동일한 기능
        x++;
    }
    std::cout << "ans = " << ans << ", " << x << std::endl;

    x = 0;  //일반함수호출
    ans = general(x++);
    std::cout << "general(x++) = " << ans << ", " << x << std::endl;

    x = 0;  //C언어 매크로
    ans = unsafe(x++);
    std::cout << "unsafe(x++) = " << ans << ", " << x << std::endl;

    x = 0;  //인라인 함수
    ans = safe(x++);
    std::cout << "safe(x++) = " << ans << ", " << x << std::endl;

    x = 0;  //상수표현식
    ans = expr(x++);
    std::cout << "expr(x++) = " << ans << ", " << x << std::endl;

    return 0;
}