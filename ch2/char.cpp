#include <iostream>
#include <cstring>
#include <locale>

//char.cpp
int main(){
    char en[] = "Hello World!";
    std::cout << "char " << en << std::endl;

    std::cout << "입력 문자 : ";
    std::cin >> en;
    for (int i = 0 ; en[i] ; ++i){
        std::cout << (char)en[i];
    }
    std::cout << std::endl;

    char wc1[] = "한글화 작업";
    std::cout << wc1 << std::endl;

    int i = 0;
    while (wc1[i]){
        std::cout << (char)wc1[i];
        ++i;
    }
    std::cout << std::endl;

    const char *wc2 = "한글화 작업";
    std::cout << wc2 << ", 문자 크기: " << strlen(wc2) << std::endl;
    
    return 0;
}


/*
//Wchar.cpp
int main(void){
#if defined __linux__ || defined __CYGWIN__
    setlocate(LC_ALL, "ko_KR.utf8");
    std::wcout << L"setlocale(LC_ALL, \"ko_KR.utf8\");" << std::endl;
#elif defined(WIN32)
    std::wcout.imbue(std::locale("kor"));
    std::wcin.imbue(std::locale("kor"));
    std::cout << "std::wcout.imbue(std::locale(\"kor\"));" << std::endl;
    setlocale(LC_ALL, "");
    std::wcout << L"setlocale(LC_ALL, \"Korean\");" << std::endl;
#endif
    wchar_t en[] = L"Hello World!";

    std::wcout << "wchar_t" << en << L", wchar_t 바이트 크기 : " << sizeof(wchar_t) << std::endl;
    std::wcin >> en;

    std::cout << "std::cout를 사용하면 ";
    for (int i = 0; en[i] ; ++i)
    {
        std::cout << (char)en[i];
    }
    std::cout << std::endl;

    std::wcout << L"그러나 std::wcout를 사용하면 \'" << en << "'" << std::endl;

    wchar_t wc1[] = L"한글화 작업";
    std::wcout << wc1 << std::endl;

    int i = 0;
    while (wc1[i])
    {
        std::cout << (char)wc1[i];
        i++;
    }
    std::cout << std::endl;

    const wchar_t *wc2 = L"\ud55c\uae00화 작업";
    std::wcout << wc2 << L", 문자 크기 : " << wcslen(wc2) << std::endl;

    return 0;
}
*/