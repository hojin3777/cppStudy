#include <iostream>

enum Days{
    None = 0x00,
    Sunday = 1<<0,      //0000 0001
    Monday = 1<<1,      //0000 0010 2
    Tuesday = 1<<2,     //0000 0100
    Wednesday = 1<<3,   //0000 1000
    Thursday = 1<<4,    //0001 0000 16
    Friday = 1<<5,      //0010 0000
    Saturday = 1<<6,    //0100 0000
};

const char *week[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

void DayName(int d){
    std::cout << d << ", ";
    for (int i = 0; i<7; ++i){
        if(d & (1<<i))
            std::cout << week[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    DayName(Sunday);
    Days meeting = Days ((int)Thursday | (int)Monday);
    DayName(meeting);
}