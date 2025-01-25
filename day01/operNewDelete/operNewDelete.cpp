#include <iostream>

int main()
{
	// 값을 할당하는 것이 아니라 주소값을 직접 만들어서
	// 해당 값의 메모리 주소를 직접 포인터 변수에 저장할 수 있다.
	int* intPtr = new int; // 값은 미정 상태로 주소값을 전달
	// int intValue;
	// int* intPtr = &intValue;


	// 초기값과 함께 값을 할당
	int* ptr2 = new int(25);

	// 배열 할당
	int* ptrArr = new int[5];

	// delete 연산자
	// 할당된 메모리에서 변수에 담긴 값을 해제하고자 할 때
	// 사용된다.
	// ★배열로 할당한 메모리는 반드시
	// delete[] 연산자로 해제해야 한다.
	delete[] ptrArr; // 배열로 선언되었으므로
	// []배열로 해제해야 한다.

	delete ptr2; // 일반 변수는 문제 없음.

	// 주의사항
	// 할당된 메모리는 반드시 해제할 것.
	// 이미 해제된 메모리를 또 해제하지 말 것.
	// 배열 형태로 할당된 메모리는 반드시 delete[]로 해제
	// 해제된 포인터는 nullptr로 설정하는 것이 안전하다.
	ptr2 = nullptr;
}