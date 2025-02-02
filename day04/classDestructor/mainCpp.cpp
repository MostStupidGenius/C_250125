#include <iostream>
#include <string>

using namespace std;

class Test {
public:
    // 소멸자
    // 객체가 소멸될 때 호출되는 특별한 메서드로
    // 주로 동적으로 메모리에 할당된 것들을 해제하는
    // 코드를 작성한다.
    // static변수의 값을 변경하기도 한다.
    // 소멸자는 ~를 생성자 앞에 붙인 형태로 선언, 정의한다.
    ~Test() {
        cout << "소멸자 호출" << endl;
    }

    Test() {
        cout << "생성자 호출" << endl;
    }
};

int main()
{
    // 객체 생성
    Test t;
    Test t1;
    Test t2;

    // 프로그램 종료 시 소멸자 호출
    return 0;
}
