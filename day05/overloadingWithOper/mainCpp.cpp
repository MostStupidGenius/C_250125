#include <iostream>
#include <string>

using namespace std;

// 연산자 오버로딩
// 사용자 정의 클래스에 대해서 연산자의 의미를 재정의할 수 있게 한다.
// - 기존 연산자에 새로운 의미를 부여한다.
// - ★클래스의 객체에 대해 연산자를 사용할 수 있게 한다
// - 코드의 가독성과 직관성을 향상시킨다.

// 형식
// ReturnType operator연산자(매개변수목록){연산자 동작 정의}

// 오버로딩 가능한 연산자들
// - 산술 연산자: + - * / %
// - 관계(비교)연산자: == != > < >= <=
// - 단항 연산자: ++ -- - !
// - 대입 연산자, 복합 할당 연산자: = += -= *= /=
// - ◆배열 접근 연산자: []
// - ◆함수 호출 연산자: ()

// 구현 방법
class Point {
    // 좌표의 x좌표와 y좌표를 의미하는 멤버 변수
    int x, y;
public:
    Point(int x, int y) : x(x), y(y) {};

    // + 연산자를 오버로딩
    // Point타입의 객체를 전달받아 Point타입으로 객체를 반환한다.
    Point operator+(const Point& other) {
        // 두 좌표의 x와 y를 각각 더한 새로운 객체를 반환
        int newX = this->x + other.x;
        int newY = this->y + other.y;

        // 새로운 좌표를 멤버 변수의 값으로 하는 새로운 객체 반환
        return Point(newX, newY);
    }

    // 현재 좌표를 나타내기 위해 정의한 함수
    void printCoordinate() {
        // printf 방식이 더 직관적이다.
        //printf("(%d, %d)", this->x, this->y);

        // 상황에 따라 출력문을 바꿔쓰자.
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }

};

int main()
{
    // 두 Point 객체를 생성
    Point p1(3, 5), p2(5, 10);
    // 각 객체의 좌표를 출력
    p1.printCoordinate();
    p2.printCoordinate();
    cout << "====" << endl;

    // 두 객체에 대한 + 연산 결과를 새로운 변수에 담는다.
    Point p3 = p1 + p2;
    // 연산결과 객체의 좌표 출력
    p3.printCoordinate();

}
