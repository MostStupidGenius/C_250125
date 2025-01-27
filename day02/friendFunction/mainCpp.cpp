#include <iostream>
#include <string>
#include "counter.h" // 미리 작성해둔 헤더 추가
using namespace std;

int main()
{
    Counter counter; // 카운터 객체 초기화(count는 0으로 초기화)
    Display display;
    
    increment(counter); // 카운터의 값을 1 증가
    display.showCount(counter); // 증가된 카운터 값을 출력

    return 0;
}
