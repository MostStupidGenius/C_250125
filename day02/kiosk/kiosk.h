// kiosk.h
#include <string>
#ifndef KIOSK_H
#define KIOSK_H

class Menu { // 메뉴 객체를 정의하기 위한 클래스 전방 선언
private:
	char* name;
	int price;
	int amount;
public:
	// 메뉴를 만드는 생성자
	Menu(char* menuName, int iPrice) : 
		name(menuName), price(iPrice), amount(0)
		{};
	friend class Kiosk; // Kiosk 클래스에서는
	// 메뉴의 항목에 제한없이 접근할 수 있도록 friend로 설정
};

class Kiosk {
private:
	// 메뉴들을 담을 배열 선언
	Menu menus[];
public:
	// 생성자
	Kiosk() {
		// 기본 메뉴를 추가할 수 있게끔 세팅
		//Menu newMenus[] = {};
	}

	// 사용자 정의 생성자로
	// 메뉴 배열을 전달받아 menus로 설정할 수 있게끔 세팅
	

	void run() {
			// 메뉴판 띄우기
			// 메뉴 번호 입력받기

			// 입력받은 메뉴 번호가 유효하다면
			// 개수를 입력받기

			// 유효한 개수라면 개수와 메뉴 가격을 곱한
			// 최종금액 산출 및 출력해서 안내

			// 결제할 금액을 입력받고
			// 현금이 금액보다 크거나 같다면 잔돈을 계산하여 출력
			// or 현금이 부족하다면 "금액이 부족합니다" 출력

	}




};



#endif // !KIOSK_H
