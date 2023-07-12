#include <iostream>

constexpr int fibonacci(int i){
    return (i <= 1) ? i : (fibonacci(i-1) + fibonacci(i-2));
}


int main(){
    int num;
    std::cout << "i: ";
    std::cin >> num;

    int res = fibonacci(num);
    std::cout << num << "th fibonacci number: " << res << std::endl;
    return 0;
}