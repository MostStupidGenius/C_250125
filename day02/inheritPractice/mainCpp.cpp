#include <iostream>
#include <string>

using namespace std;

// 동물 클래스를 부모 클래스로 하여 
// Dog 클래스와 Cat 클래스를 정의,
// 이때 각각 bark() 메서드에 대한 내용을 재정의한다.
class Animal {
private:
    string name;
    int age;
public:
    // 짖기
    // 짖는다는 행동을 부모클래스에서 정의하되
    // 자식클래스에서 재정의할 수 있도록 
    // virtual을 앞에 붙인다.
    virtual void bark() {
        cout << "소리내어 웁니다." << endl;
    };
    virtual ~Animal() {};
};

// 개 클래스
// Animal 클래스를 상속받는다.
class Dog : public Animal {
public:
    Dog() : Animal() {};

    // 부모 클래스로부터 상속받은 메서드를 재정의할 경우
    // 선언부의 뒤쪽에 override 예약어를 작성하여
    // 상속받은 메서드임을 나타낼 수 있다.
    // 이때 부모클래스의 해당 메서드는 앞에 virtual을 작성하여
    // 명시적으로 override를 할 수 있게 세팅해야 한다.
    void bark() override {
        cout << "멍멍 짖습니다." << endl;
    }
};

int main()
{
    Animal ani; // 기본 생성자
    Dog dog;

    // 부모클래스의 메서드 호출
    ani.bark();
    // 자식클래스가 재정의한 메서드 호출
    dog.bark();
}
