#include <iostream>
#include <string>

using namespace std;

class Chain {
private:
    int count;

public:
    // 메서드 체이닝
    // 메서드가 호출된 후,
    // 객체의 주소를 담은 this 포인터를 반환한다.
    // 이를 통해 해당 메서드를 사용한 뒤에
    // 하위접근연산자.를 통해 다른 메서드를 이어서
    // 연쇄적으로 메서드 사용이 가능하다.
    Chain* print(string text) {
        cout << text;
        return this;
    }
};
int main()
{
    Chain c;

    // 체이닝 메서드를 사용할 때에는
    // 첫 메서드는 하위접근연산자를 통해 접근하지만
    // 두번째 메서드부터는 포인터 접근 연산자->를
    // 사용하여 그 기능을 호출해야 한다.
    // 이를 통해 연쇄적으로 체이닝된 메서드를
    // 사용할 수 있다.
    c.print("안녕, ")
        ->print("나는 홍길동이야.\n")
        ->print("반가워");
}
