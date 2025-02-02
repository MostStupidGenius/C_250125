#include <iostream>
#include <string>

using namespace std;
// 클래스 선언 및 정의
// Student 클래스를 만들 것이다.
// static int idNum;
// string name;
// int age;
// int scores[];// 점수
// 국어, 영어, 수학
// - 생성자를 만들어야 한다.
//      - 기본 생성자
//      - 이름, 나이
//      - 이름, 나이, 점수
// - get/set 함수 제작
//      - 점수 입력을 받을 때, 그 요소의 값을 검사하여
//          음수인 경우 해당 값을 0으로 설정->for(i)
//      - 나이 유효성 검사
// 
// - 평균 점수를 계산하는 메서드 제작
//      - int getAverage()
//          총합 / 3
// 
class Student {
private:
    // 멤버 변수
    string name;
    int age;
    int* scores;
    int size = 3;
    //int scores[3];

    // 객체 생성 순서 자동으로 생성
    static int idNum;
    int id; // 학번

public:
    // 기본생성자
    Student() : name("unknown"), age(0) {
        // 1. 배열의 길이가 정해진 경우
        /*for (int i = 0; i < 3; i++) {
            this->scores[i] = 0;
        }*/
        // 2. 새로운 배열을 만들어서
        // 그 주소값을 scores 멤버 변수에 저장하는 방법
        int tempScores[3] = { 0, 0, 0 };
        this->scores = tempScores;
        id = idNum++;
    }

    // 이름, 나이만 입력받고
    // 점수는 0, 0, 0으로 초기화하는 생성
    //Student(string name, int age) {
        //this->name = name;
        //this->age = age;
    Student(string name, int age) :
        name(name), age(age)
    {
        int tempScores[3] = { 0, 0, 0 };
        this->scores = tempScores;
        id = idNum++;
    }

    // 이름, 나이, 점수를 모두 입력받는 생성자
    Student(string name, int age, int scores[3]) :
        name(name), age(age), scores(scores)
    {
        id = idNum++;
    }

    Student(string name, int age, int kor, int eng=0, int math=0)
        : name(name), age(age), id(idNum++)
    {
        this->scores[0] = kor;
        this->scores[1] = eng;
        this->scores[2] = math;
    }

    void setName(string n) {
        this->name = n;
    }

    string getName() {
        return name;
    }

    void setAge(int age) {
        // 삼항 연산자로 유효성 검사 실행
        this->age = age < 0 ? 0 : age;
    }

    int getAge() {
        return age;
    }

    void setScores(int scores[3], int size = 3) {
        for (int i = 0; i < size; i++) {
            // 점수를 임시 변수에 담는다.
            int score = scores[i];
            // 임시 변수의 값을 검사한다.
            if (score < 0) {
                // 0보다 작다면 해당 점수를 0으로 설정한다.
                scores[i] = 0;
            }
        }
        // 값이 변경된 해당 배열의 주소를
        // 멤버 변수에 전달한다.
        this->scores = scores;
    }

    int* getScores() {
        return scores;
    }

    int getAverage() {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->scores[i];
        }
        return sum / size;
    }

    // 학번을 가져오는 함수
    // setter는 만들지 않는다.
    int getId() {
        return this->id;
    }

};
// 학번 생성을 위한 시퀀스(sequence)의 초기값 설정
int Student::idNum = 1;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    int scores[3] = { 70, 80, 90 };
    Student hong("홍길동", 30, scores);
    int avg = hong.getAverage();
    cout << "평균: " << avg << endl;
    cout << hong.getScores()[0] << endl;

    // 홍길동의 학번 출력
    cout << hong.getId() << endl; // 5번째 생성 객체

}
