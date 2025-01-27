#include <iostream>
#include <string>

using namespace std;

int main()
{
    // C++에서 새로 추가된 두 개의 자료형
    // 1. bool 논리 자료형
    // bool 자료형은 true와 false 두 가지의 값만 보유할 수 있다.
    // 비교연산자(관계연산자)와 논리연산자의 결과로
    // 참일 경우 true, 거짓일 경우 false로 반환하도록 바뀌었다.
    // 내부적으로는 C언어의 0과 1로 치환되어 연산되지만
    // 개발자가 코드를 작성하는 동안에는 예약어로서 동작한다.

    // 논리 자료형
    bool isFalse = (1 > 5);
    bool isTrue = true;
    false;

    cout << isFalse; // 거짓 -> false
    cout << bool(isTrue);

    cout << "======auto=======";
    // 2. auto 자료형
    // 자료형을 자동으로 추론하는 자료형으로, 
    // auto 변수명 = 값;
    // 전달된 값의 타입을 추론하여 해당 자료형으로
    // 자동으로 설정되는 자료형이다.
    // auto 자료형은 반드시 초기화를 해야 한다.
    // -> 타입 추론 없이 사용할 수 없다.
    int num = 10;
    auto input = num; // 전달된 num 변수의 타입이 int이므로
    // 자동으로 int타입으로 설정된다.
    auto name{ "홍길동" }; // const char*로 추론
    
    cout << "\n" << num + input; // 20

    // 람다 표현식
    // 익명함수로 불리며, 간단히 함수를 표현할 때 사용되는 표현식이다.
    // 이러한 표현식에서 매개변수의 타입을 지정하지 않고 싶을 때
    // auto 자료형을 사용한다.
    auto sum = [](auto a, auto b) {return a + b; };
    cout << endl << sum(3, 5) << endl;
}
