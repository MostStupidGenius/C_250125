#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;
    int age;
public:
    // 기본 생성자 없음
    Animal(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // 복사 생성자
    // 전달받은 객체의 정보에 접근하여
    // 그 값을 그대로 현재 객체(this)의 정보에
    // 삽입하여 새로운 객체를 만드는 생성자
    // 전달받는 객체는 주소값형태로 전달받아야 한다.
    // 전달받는 주소값은 const로 설정되어 있다.
    Animal(const Animal& other) {
        this->name = other.name;
        this->age = other.age;
    }

};

int main()
{
    // 객체 생성
    Animal kong("콩이", 9);

    // 기존 객체를 통해 새로운 객체 생성
    Animal newKong(kong);

    



}
