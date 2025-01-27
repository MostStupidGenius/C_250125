// counter.h
#ifndef COUNTER_H // 헤더 가드 시작
#define COUNTER_H // COUNTER_H 매크로 정의
#include "stdio.h"

class Display; // 전방 선언

class Counter {
private:
	int count; // 카운터의 현재 값을 저장하는 멤버 변수
public:
	// count를 0으로 초기화
	// 초기화 리스트 방식을 사용한 기본 생성자
	Counter() : count(0) {}

	// Display 클래스를 친구로 선언
	friend class Display;

	// increment 함수를 친구 함수로 선언
	// 이 함수는 Counter의 private 멤버에 접근 가능
	friend void increment(Counter& c);
};

// 클래스 Display 정의
class Display {
public:
	// Counter 객체의 현재 카운트 값을 출력하는 멤버 함수
	// friend class 선언 덕분에 private 멤버인 count에 직접 접근이 가능하다.
	void showCount(Counter& c) {
		printf("현재 카운트: %d\n", c.count);
	}
};

// Counter 클래스의 친구 함수로 선언된 전역 함수
// Counter 객체의 count값을 1 증가 시킨다.
void increment(Counter& c) {
	// friend 선언 덕분에 private 멤버 count에 직접 접근이 가능하다.
	c.count++; // 증감연산자로 1 증가 시킨다.
}

#endif // !COUNTER_H // 헤더 가드 끝
