#include <iostream>
#include <string>

using namespace std;

// 상속(Inheritance)
// 한 클래스의 필드, 메서드 등의 속성을 다른 클래스에게
// 그대로 물려주는(복사) 것을 의미한다.
// 물려주는 클래스 쪽은 부모 클래스 혹은 슈퍼 클래스라고 부른다.
// 상속을 받는 클래스 쪽은 자식 클래스 혹은 서브 클래스라고 부른다.
// 복사라고는 했지만 이는 눈에 보이지 않게 시스템적으로 이루어지며
// 부모 클래스에 생기는 변경사항은 자식클래스에
// 실시간으로 적용된다.
// 자식 클래스가 부모로부터 전달받은 필드의 내용은
// 자식 클래스 안에서 직접 쓰지 않는다.
// 대신에 자식 클래스 대에서 추가되거나 변경되는 사항만
// 작성한다.
// 이로써 변경된 부분만 자식클래스에서 확인할 수 있기 때문에
// 많은 내용이 작성되지 않게 된다.
// 가독성의 향상, 유지보수성의 향상을 기대할 수 있다.
// 
// Animal 클래스를 만들어서
// Dog 클래스에 상속해보자.
// 상속구문:
// class Cls : pulbic Supers {}
// 기존의 클래스처럼 선언하되 뒤에 콜론:과 함께
// 상속할 부모 클래스에 대한 접근 지시자와
// 클래스명이 잇따라 나온다.
class Animal {
    // 부모 클래스이기 때문에 :을 작성하지 않는다.
private:
    string name;
    int age;
public:
    // 다른 클래스에서는 접근이 불가능하지만
    // 자식클래스에 한해서는 외부 클래스일지라도
    // 접근이 가능하게 하는 접근 지시자다.

    // 가상 함수
    // 부모 클래스에서 정의하는 메서드로
    // 자식 클래스에서 이 함수를 재정의할 수 있음을
    // 명시적으로 표시한다.
    void printSound() {
        cout << "동물은 소리내어 웁니다." << endl;
    }
public:
    Animal() {}
    Animal(string n, int a) : name(n), age(a) {}

    string getName() {
        return this->name;
    }

    void setName(string n) {
        this->name = n;
    }

    int getAge() {
        return this->age;
    }

    void setAge(int a) {
        this->age = a >= 0 ? a : 0;
    }
};

// Animal 클래스를 부모 클래스로 하는 자식 클래스 Dog 선언
class Dog : public Animal {
    // 부모 클래스 앞의 public은 부모 클래스에서 정의한
    // 접근 지시자를 그대로 따르겠다는 의미이다.
private:
    double height; // 부모 클래스 없는 특성을 자식클래스에서 추가


public:
    void printSound() {
        cout << "멍멍 짖습니다." << endl;
    }
    // 생성자
    Dog(string n, int a) :
        // 부모 생성자를 자식 클래스에서 호출함으로써
        // 부모 클래스에 선언된 필드, 메서드 등의 정보들을
        // 자식 클래스에서 사용할 수 있게 된다.
        // 이러한 생성자 연계는 최상위 부모 클래스의 생성자를 호출할 때까지
        // 반복적으로 이루어진다.
        Animal(n, a) {
        // name(n), age(a)
        height = 0;
    }

    // 부모클래스에서 정의하지 않은 내용을 
    // 자식클래스에서 선언 및 정의 -> 부모 클래스에서는
    // 직접적으로 쓸 수 없는 기능이다.
    void printInfo() {
        cout << "name: " << this->getName() << endl;
        cout << "age: " << this->getAge()<< endl;
        cout << "height: " << height << endl;
    }
};

int main()
{
    Dog baduk("바둑이", 10);
    cout << "name: " <<  baduk.getName() << endl;

    baduk.printInfo();
    baduk.printSound();
    //baduk.callSound();

    Animal* baduk2 = &baduk;

    // 자식 클래스에서 부모 클래스 타입의 참조 변수에 담긴 경우
    // 부모 클래스 타입에 없는 기능은 사용할 수 없다.
    //baduk2->printInfo();

    // 부모 클래스에서 정의한 함수를 자식 클래스에서 재정의한 뒤
    // 자식 클래스를 부모 클래스 타입으로 담아서 해당 기능을
    // 쓰려고 하면 override를 하지 않은 경우
    // 부모 클래스에서 정의했던 내용대로 코드가 실행된다.
    baduk2->printSound();

    // 부모 정의 virtual 함수 -> 자식 재정의(override)
    // 자식->부모 참조 변수에 담았을 때, 재정의한 내용으로 실행

    // 부모 정의 함수 -> 자식이 함수를 정의
    // 자식->부모 참조 변수에 담았을 때, 부모가 정의한 내용으로 실행
}
