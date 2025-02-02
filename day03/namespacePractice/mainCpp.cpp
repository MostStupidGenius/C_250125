#include <iostream>
#include <string>

using namespace std;

// Math라는 namespace를 정의하여
// 내부에 계산을 할 수 있는 함수를 정의해보자.
// 덧셈, 뺄셈 + 그외 원하는 함수 구현
// 변수 result를 선언, 계산 결과를 result에 담아서 쓴다.
namespace Math {
    int result = 0;
    void add(int a, int b = result) {
        result = a + b;
    }
}

int main()
{
    // using namespace를 이용하여
    // :: 없이 Math 영역의 함수를 사용해보자.
    using namespace Math;
    add(3, 5); // 8
    cout << result << endl;

    add(7); // 8 + 7
    cout << result << endl; // 15
}
