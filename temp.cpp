#include <iostream>


int main(){
    int i = 17;
    int *j = &i;

    std::cout << i << ", " << *j++ << std::endl;
    std::cout << j << ", " << *j-- << std::endl;
    std::cout << j << ", " << *j++ << std::endl;
    std::cout << j << ", " << *j++ << std::endl;
    std::cout << j << ", " << *j++ << std::endl;
    std::cout << j << ", " << *j++ << std::endl;
}