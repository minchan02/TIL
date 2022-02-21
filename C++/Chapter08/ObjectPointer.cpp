#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void) {
	Person * ptr1 = new Student();
	Person * ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3; // delete로 메모리 삭제
	return 0;
}

// Person형 포인터 변수는 Person객체를 상속하는 객체에 접근 가능하다.
// Is-A 관계가 성립하면 상속 관계
