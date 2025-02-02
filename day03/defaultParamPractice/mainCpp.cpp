#include <iostream>
#include <string>
using namespace std;

// 도형의 넓이를 구하는 함수를 만들어보자.
int rect(int, int, string);

// 가로, 세로, 색깔을 매개변수로 하는 함수 정의
int rect(int width, int height = 1, string color = "black") {
    // 기본 색은 "black"으로 설정하고
    // 기본 height 값은 1, width의 기본값은 설정하지 않는다.
    // ※기본 값 설정은 매개변수의 순서상 우측부터 주어야 한다.
    cout << "color: " << color << "\n";
    // width, height의 곱을 int 타입으로 반환하는 함수 완성
    // return type인 void를 변경해주어야 한다.
    return width * height;
}

int main()
{
    int result1 = rect(10);
    int result2 = rect(10, 3);
    cout << "1: " << result1 << "\n"; // 10
    cout << "2: " << result2 << "\n"; // 30

}
