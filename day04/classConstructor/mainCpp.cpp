#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    // 생성자를 이용해서 인스턴스 변수를
    // 초기화하는 C++스러운 문법
    // - : 변수명(값)
    Person() : name("noname"),age(0) {; }
    Person(string inputName, int age) {
        name = inputName;
        // this 포인터
        // 객체를 가리키기 위한 대명사 역할을 한다.
        // 객체 주소를 담고 있는 예약어.
        // 포인터이기 때문에 ->를 이용하여 그 값에 접근해야 한다.
        this->age = age;
    }

    // 객체의 정보를 출력하는 함수 만들기
    void printInfo() {
        cout << "name: " << this->name << endl;
        cout << "age: " << this->age << endl;
    }

    // static 함수(메서드)의 경우에는
    // 소속된 객체가 없기 때문에
    // 객체를 가리키는 this 포인터를 사용할 수 없다.
    static void printSomething() {
        //this->age; // 오류가 발생한다.
        cout << "static 함수입니다." << endl;
    }



};

int main()
{
    // 객체 생성
    Person hong; // 기본생성자
    // 기본값 noname 0
    cout << hong.name << endl;

    // 직접 접근(public)하여 그 값을 변경
    // 값의 유효성 검사를 할 수 없기 때문에
    // 정보의 무결성을 침해받을 수 있다.
    // -> getter/setter
    hong.name = "홍길동";
    hong.age = 30;

    // 객체의 정보를 출력하는 메서드 호출, 사용
    hong.printInfo();

    // static 함수의 경우, ::를 이용해
    // 접근, 사용하는 것이 일반적이지만
    Person::printSomething();
    // 객체의 하위접근연산자.를 통해서 접근, 사용도 가능하다.
    // 하지만 static 함수는 static한 방법으로 접근하는 것이
    // 가독성에 좋다.
    // 권장하지 않는 방법이다.
    hong.printSomething();
}
