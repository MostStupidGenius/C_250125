#include <iostream>
#include <string>
#include <stdexcept>
// 예외 처리를 위한 예외 관련 헤더 include

using namespace std;

// 두 개의 정수를 전달받아서 나눗셈을 실행하는 함수인데
// 두번째로 전달받은 값이 0일 경우
// 오류가 발생하게끔 세팅한다.
int divide(int a, int b) {
    // throw라는 예약어를 이용해서 직접 오류를 발생시킬 수 있다.
    // 오류가 발생하면 함수를 즉시 종료하고 오류 객체를 사용했던 쪽으로 던진다.
    if (b == 0) throw invalid_argument("0으로 나눌 수 없습니다.");
    int result = a / b;
}

// 함수가 예외를 던지지 않음을 명시적으로 선언하는 예약어
// noexcept
int divide2(int a, int b) noexcept {
    // 이 함수는 예외를 던지지 않음
    // 안에서 throw를 사용했더라도 외부로 예외를 던지지 않기 때문에
    // 바깥에서 예외를 감지할 수 없다.
    if (b == 0) throw invalid_argument("0으로 나눌 수 없습니다.");
    int result = a / b;
    return result;
}

int main()
{
    // 예외 처리
    // 프로그램 실행 중 오류가 발생할 경우, 프로그램은
    // 치명적인 대미지를 피하기 위해 강제 종료되는 게 기본값이다.
    // 하지만, 오히려 오류가 발생했을 때
    // 속행하는 것이 문제를 피하는 방법일 때도 있다.
    // 특정 오류가 발생했을 때, 대응 방안을 미리 정해두고
    // 이를 수행한 후 프로그램을 종료하지 않고 이어서 진행하는 것을
    // 예외라고 부르며, 이를 통제하고 관리하는 구문을
    // 예외 처리 구문이라고 한다.
    // 이러한 예외 처리 구문은 크게 두 파트로 나뉜다.
    // - 오류가 발생할 수 있는 코드 -> try 코드 블록
    // - 오류를 잡아채기 위한 코드 블록들 -> catch 블록

    // 아래는 발생할 수 있는 일반적인 에러 상황들이다.
    // 이를 재현하여 try-catch를 사용해보자.
    
    //cout << divide(10, 0) << endl;
    // 0으로 나누기
    try {
        cout << divide(10, 0) << endl;
    }
    // 잘못된 인자를 전달한 경우 발생시키는 예외
    catch (invalid_argument e) {
        cout << e.what() << endl;
    }
    // 모든 예외에 해당 코드 블록 실행
    catch (exception e) { // 예외 객체를 처리
        cout << "예외 발생: " << e.what() << endl;
    }
    

    // 아래 내용을 함수에서 구현하고 예외를 작성할 수 있다.
    // 배열 초과범위
    //int arr[] = { 1, 2, 3 };
    ////cout << arr[3] << endl;
    // 
    // null 포인터 역참조
    // 할당 실패
    // 형변환 실패
    // 파일 열기 실패
    cout << "정상 종료" << endl;
    return 0;
}
