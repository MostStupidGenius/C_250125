#include <iostream>
#include <string>

using namespace std;

// 클래스 선언 및 정의
// class 예약어와 함께 대문자로 시작하는
// 클래스 이름으로 선언을 한다.
class Student {
    // 필드
    // 클래스 중괄호{} 영역 내부를 전부 필드(field)라고
    // 부른다.
    // 멤버 변수를 선언하려면 기본적으로
    // 접근 지시자인 private의 영역 안에 작성해야 한다.
private:
    // 멤버 변수의 종류
    // 각 객체마다 고유하게 소유하는 변수
    // -> 인스턴스 변수
    int studentNum;
    string name;

public:
    // getter/setter
    // private으로 설정된 멤버변수에 
    // 접근할 때에 접근을 제어하기 위한
    // 함수를 따로 선언하여 접근을 통제하거나
    // 유효성 검사 등을 수행하는 역할을 한다.
    int getStudentNum() {
        return studentNum;
    }

    void setStudentNum(int num) {
        // 유효성 검사
        if (num < 0) {
            // 입력된 숫자값이 유효하지 않다면
            studentNum = -1; // 설계자가 설정한
            // 기본값으로 설정 후
            return; // 함수 종료
        }
        studentNum = num;
    }

    // 생성자(constructor)
    // 클래스(설계도)를 통해 객체를 생성할 때
    // 필요한 정보를 입력하는 것을 도와주는
    // 특수한 함수(메서드)다.
    // - 클래스 이름과 동일하게 메서드 명을 설정
    // - return type을 명시하지 않는다.
    //      -> 
    Student() {
    }

    // 학생 번호와 이름을 입력받는다.
    Student(int num, string name) {
        studentNum = num;
        this->name = name;
    }
};

int main()
{
    // 객체 생성
    // 객체를 생성할 때에는 객체 변수명 뒤에
    // 소괄호()를 붙여서 생성자 메서드를 호출한다.
    // - 기본생성자를 호출하는 경우에는 소괄호()를 붙이지 않는다.
    Student st1; // 기본 생성자 호출
    Student st(2, "홍길동"); // 사용자 정의 생성자
    
    // st1 객체의 번호 변수에 접근하여 값을 변경
    st1.setStudentNum(1);
    // st1 객체의 번호 변수에 접근하여 사용
    cout << st1.getStudentNum() << endl; // 1

    // st 객체의 번호 변수에 접근하여 사용
    cout << st.getStudentNum() << endl; // 2

}
