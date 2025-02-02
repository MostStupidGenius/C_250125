#include <iostream>
#include <string>
using namespace std;

// 함수 선언
template <typename T> T add(T num1, T num2);
template <typename T> T sub(T num1, T num2);
template <typename T> T multi(T num1, T num2);
template <typename T> T divide(T num1, T num2);


// 템플릿 함수 정의
// 35분까지 함수 모두 정의하고 실행해보기
template <typename T>
T add(T num1, T num2) {
    return num1 + num2;
}

template <typename T>
T sub(T num1, T num2) {
    return num1 - num2;
}

template <typename T>
T multi(T num1, T num2) {
    return num1 * num2;
}

template <typename T>
T divide(T num1, T num2) {
    return num1 / num2;
}



int main()
{
    cout << add(3, 5) << endl; // 8
    cout << sub(31.5, 12.1) << endl; // 19.4
    cout << multi(3.14, 3.0) << endl; // 9.42
    cout << divide('b', char(2)) << endl; // 33번째의 문자인 1 출력

}
