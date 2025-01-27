#include <iostream>
#include <string>
#include "kiosk.h"


using namespace std;

int main()
{
    // 클래스를 활용하여 키오스크 프로그램 작성하기
    // 필요한 클래스를 생각해보자.
    // 1. 키오스크: 주문을 받고, 결과 출력,
    // 다른 클래스와 연동하여 데이터를 주고받는 센터 역할
    // 2. 메뉴: 메뉴의 정보를 입력받아 객체로 만들고
    // 가격 변경, (고급)할인율 적용
    // 3. 장바구니: 여러 메뉴를 컨트롤할 수 있는 클래스
    Kiosk kiosk;
    kiosk.run();
}
