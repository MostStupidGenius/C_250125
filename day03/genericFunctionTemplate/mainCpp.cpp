#include <iostream>
#include <string>

using namespace std;

// 함수 템플릿
// 제네릭 타입을 이용해서 특정 타입이 아니라
// 함수가 호출되는 시점에 타입이 정해지는 함수를
// 선언하고 정의하는 것을 말한다.
// template <typename T>
// T 함수명(T, T, int){}

// 함수 템플릿 선언
// 타입 이름 T에 대한 함수 정의
template <typename T>
// 전달되는 매개변수의 타입에 따라 T라는 타입이 정해지며
// 이는 함수 내부에 있는 모든 T 타입에 적용된다.
T add(T value1, T value2) {
    return value1 + value2;
}

int main()
{
    // 함수 템플릿으로 만든 add 함수 써보기
    int result = add(10, 20);
    cout << result << "\n";

    double result2 = add(10.3, 20.1);
    cout << result2 << "\n";

    char result3 = add('a', char(3));
    cout << result3 << "\n";

}
