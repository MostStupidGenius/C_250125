#include <iostream>
#include <string> // 문자열을 처리, 다루기 위한 include 구문

using namespace std; // std 네임 스페이스 사용 선언
// 네임스페이스 사용을 선언하면 해당 네임 하위의 다른 기능들을
// 기능 이름만으로 호출할 수 있다.
// 교육하는 동안에만 네임스페이스를 쓴다.

int main()
{
	// 문자열 - C언어
	char str[] = "Hello";


	// 문자열 - C++언어
	// 문자열 길이의 제한이 없고,
	// 문자열 연산과 그 안전성이 높기 때문이다.
	std::string str2 = "Hello";

	// 활용 예제
	
	std::string name = "홍길동";
	int age = 20;
	double height = 175.5;

	// 여러 데이터 타입 조합하여 출력하기
	std::cout
		<< "이름: " << name << ",\n"
		<< "나이: " << age << "세\n"
		//<< "키: " << height << "cm"
		<< std::endl;

	// 수식과 함께 사용
	int x = 10, y = 20;

	std::cout << x << " + " << y << " = " << x + y
		<< std::endl;
	cout << x << " + " << y << " = " << x + y
		<< endl;

	// 주의사항
	/*
	* 1. iostream 헤더를 반드시 포함해야 한다.
	* 2. std::cout은 std 네임스페이스에 속해 있으므로,
	* using namespace std를 사용하지 않는 경우
	* std::접두어를 붙여야 한다.
	* 출력 형식을 지정하려면 iomapip 헤더의 조작자를
	* 사용할 수 있다.
	*/
}