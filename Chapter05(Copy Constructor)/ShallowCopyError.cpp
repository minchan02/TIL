#include<iostream>
#include<cstring>
using namespace std;
/*
	name과 age는 깊은 복사가 되지만 동적 할당한 name배열은 얕은 복사가 되버린다
*/
class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete []name; // 얕은 복사 때문에 오류!
		cout << "called destructor!" << endl;
	}
};

int main(void) {
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
