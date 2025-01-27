#include <iostream>
#include <string>

using namespace std;

// 친구 클래스(Friend Classes)
// 다른 클래스의 모든 멤버에 접근 제어자를 무시하고
// 접근할 수 있는 클래스다.
// 주로 긴밀하게 협력하거나 데이터 공유가 필요할 때,
// 한 클래스가 다른 클래스의 구현을 돕는 도우미 클래스로 사용될 때,
// 복잡한 데이터 구조나 알고리즘에 클래스간 효율적인 접근이 필요할 때
// 등의 경우에 사용된다.

// 자동차 클래스와 엔진 클래스가 서로 친구 클래스이며
// 자동차의 speed 변수에 엔진 클래스가 접근하여 그 값을 변경이 가능

// 엔진 클래스를 전방 선언
class Engine;
// Car 클래스에서 Engine 클래스를 구현하기 전에
// 친구 클래스로 선언하려면 전방 선언으로
// 미리 이름을 선점해야 한다.

// 만약 Engine 클래스를 헤더 클래스로 만들었다면
// include한 것과 동일하다고 보면 된다.

class Car {
private:
    int speed;
    // 친구 클래스 선언
    friend class Engine;

public:
    Car() {
        speed = 0;
    }
    Car(int sp) {
        speed = sp;
    }
    int getSpeed() {
        return this->speed;
    }
};

// 전방 선언했던 엔진클래스 구현, 정의
class Engine {
public:
    static void controlSpeed(Car& car, int speed) {
        // 매개변수로 Car클래스를 객체화한 인스턴스를 전달받는다.
        // Car의 private 멤버변수인 speed에 직접 접근이 가능하다.
        car.speed = speed;
    }
};

int main()
{
    Car car; // 기본 생성자 호출
    cout << car.getSpeed() << endl; // 세팅 전 상태

    //Car car(30); // 초기 속도 세팅하는 사용자 정의 생성자 호출
    Engine::controlSpeed(car, 100);
    cout << car.getSpeed() << endl; // 세팅 후 값
}
