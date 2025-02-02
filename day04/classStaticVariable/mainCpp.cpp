#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    // 학생의 수를 셀 공유 변수(static 변수)
    static int count;
    // static 변수
    // 공유변수라고도 불리며, 모든 객체가 공유하는
    // 하나의 변수를 가리킨다.
    // 이는 namespace의 변수처럼 클래스 영역에
    // 오직 하나만 존재하는 정적 변수이다.
    // 때문에 해당 변수에 접근할 때에는
    // namespace의 변수에 접근할 때처럼
    // 콜론 두 개::로 접근해야 한다.
    
    // 생성자 정의
    // 객체를 생성하면서 공유변수의 값을 1씩 증가시킨다.
    Student() {
        count++;
    }

    static int getCount() {
        return count;
    }

};

// 공유 변수에 대한 초기값 설정
int Student::count = 0;

int main()
{
    // 객체 호출
    Student hong;
    Student kim;
    Student lee;
    Student lee2;
    
    cout << Student::count << endl;

}
