#include <iostream>
#include <string>


// 네임스페이스
// C++에서 다루는 여러 대상들(변수, 함수, 객체,...)을
// 네임스페이스라고 하는 영역, 폴더의 개념에 묶어서
// 관리하기 위해 이러한 개념이 등장했다.
namespace MySpace {
    // MySpace라는 영역에
    int value = 10; // 이러한 변수와
    void printValue() { // 이런 함수를 정의
        cout << value;
    }
}

// using namespace 지시어 사용
// 해당 네임스페이스의 모든 요소를
// 현재 범위로 가져오는 방법이다.
// - 반복적인 네임스페이스 지정을 줄일 수 있다.
// - 코드를 간결하게 작성할 수 있다.
using namespace std;
// std::cout -> cout

int main()
{
    // 네임스페이스의 영역 요소에 접근하는 방법
    // 범위 지정 연산자::를 사용하여 네임스페이스 영역의
    // 요소에 접근한다.
    // 
    // 네임스페이스::요소
    //MySpace::value += 5;
    // using을 사용하여 네임스페이스 명시 없이도
    // 해당 요소를 사용할 수 있다.
    using MySpace::value;
    value += 5;

    MySpace::printValue();




}
