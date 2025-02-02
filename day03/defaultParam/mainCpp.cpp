#include <iostream>
#include <string>
using namespace std;

// 함수 선언(매개변수명 생략 가능)
//void printName(string, int); // 기본값 없이 선언
void printName(string = "no name", int = 1); // 기본값 설정


// 함수 정의
void printName(string name, int count) {
    // 전달받은 name 문자열을 count 만큼 반복해서 출력
    for (int i = 0; i < count; i++) {
        cout << name << " ";
    }
}

int main()
{
    // 기본값을 활용
    printName(); // noname을 1번 출력
    printName("홍길동"); // 홍길동이라는 이름을 1번 출력

    // 기존 함수 방식대로 사용 -> 인수를 모두 전달
    printName("고길동", 3); // 고길동을 3번 출력

}
