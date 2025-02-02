#include <iostream>
#include <string>
using namespace std;
// 함수의 오버로딩
// 같은 이름으로 함수를 여러 개 선언하여 사용하는 것을 가리킨다.
// 이때, 같은 이름의 함수를 어떻게 구분하느냐,
// 시그니처: 매개변수의 타입, 개수, 순서의 조합에 따라
// 마치 함수의 지문처럼 각자 다르게 설정을 하면
// 함수를 사용할 때 컴파일러에서 적절한 함수를 선택하여
// 해당 함수를 호출한다.

// 함수 선언부에서 소괄호()안의 내용을 시그니처라고 부른다.
// 이러한 시그니처가 다르다면 서로 다른 함수로 인식하여
// 중복으로 선언할 수가 있다.
void printName();
void printName(string);
void printName(string, string);

void printName() {
	cout << "홍길동" << "\n";
}

void printName(string name) {
	cout << name << "\n";
}

// string 매개변수의 기본값을 설정해버리면
// 값을 전달하지 않는 printName()이라는 시그니처도
// 동시에 보유하기 때문에
// 위에서 선언했던 printName()이라는 함수와
// 그 시그니처가 중복되게 된다.
// 때문에 컴파일러 입장에서 어떤 함수를 사용해야 할지
// 모호성이 발생하기 때문에 오류가 발생한다.
//void printName(string name = "홍길동2") {
//	cout << name << "\n";
//}

void printName(string firstName, string lastName) {
	cout << lastName << " " << firstName << "\n";
}

int main()
{
	// 각 함수의 시그니처에 맞게 인수를 전달하면
	// 적절한 함수를 찾아서 컴파일 해준다.(오류 없다)
	printName();
	printName("고길동");
	printName("순신", "이");

}
