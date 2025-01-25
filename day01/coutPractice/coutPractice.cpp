
#include <iostream>

using namespace std;

int main()
{
    // 실습1
    // 입력받기
    /*
    * cin >> 변수명
    * 위 코드를 이용하여 변수명에 입력받은 값을 전달받을 수 있다.
    * 
    * string 타입의 name 변수와 int 타입의 age 변수를 선언하여
    * cin으로 값을 입력받은 뒤
    * 
    * cout으로 입력받은 이름과 나이를 출력하는 프로그램을
    * 작성하라.
    */
    string name;
    int age;
    cout << "이름을 입력해주세요: ";
    cin >> name;

    cout << "나이를 입력해주세요: ";
    cin >> age;

    cout << "\n이름: " << name
        << "\n나이: " << age
        << endl;
    
    /*실습2
    * 두 개의 숫자와 연산자(사칙연산)를 문자열로 입력받아
    * switch문으로 연산 결과를 출력하는 프로그램 작성
    */
    int x, y; // 정수를 전달받아 저장할 변수 선언
    string oper; // 연산자를 저장할 변수 선언
    
    cout << "두 숫자를 연산하는 식을 공백으로 각 값을 구분하여"
        << "\n입력하라(예: '3 + 5' 입력시 8 출력) :";
    cin >> x >> oper >> y; // 숫자[공백]연산자[공백]숫자
    // 위와 같이 입력받기 위해 >>를 연속으로 사용

    // oper에 담긴 문자열의 값에 따라서
    // 삼항연산자로 그 결과를 출력하는
    // 프로그램 작성
    // 전달받은 문자열의 0번째 문자가 연산자라면
    char oper2 = oper[0];
    oper2 == '+' ? x + y :
        (oper2=='-' ? x - y : 
            (oper2=='/' ? x / y : 
                (oper2=='*' ? x * y : 0)
            )
        );

    // 두번째 예시
    // 연산자의 첫번째 문자를 operChar 변수에 담는다
    char operChar = oper[0];
    // 연산 결과를 담을 변수 선언
    int result;

    switch (operChar) {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
        break;
    default: // 입력된 연산자가 사칙연산이 아닐 경우
        result = 0;
    }

    cout << "결과: " << x << " " << oper << " " << y
        << " = " << result;

}
