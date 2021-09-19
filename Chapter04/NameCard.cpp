#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
	enum {CLERK, SENIOR,ASSIST, MANAGER};

	void ShowPos(int pos) {
		switch (pos) {
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
		}
	}
}

class NameCard
{
private:
	char* name;
	char* companyname;
	char* PhoneNum;
	int position;

public:
	NameCard(char* Iname, char* Icompanyname, char* IPhoneNum, int pos)
		:position(pos)
	{
		name = new char[strlen(Iname) + 1];
		companyname = new char[strlen(Icompanyname)+1];
		PhoneNum = new char[strlen(IPhoneNum) + 1];
		strcpy(name, Iname);
		strcpy(companyname, Icompanyname);
		strcpy(PhoneNum, IPhoneNum);
	}
	
	void ShowNameCardInfo() {
		cout << "이름: " << name << endl << "회사: " << companyname << endl << "전화번호: " << PhoneNum << endl << "직급: ";
		COMP_POS::ShowPos(position);
		cout << endl;
	}
	~NameCard() {
		delete[]name;
		delete[]companyname;
		delete[]PhoneNum;
	}
};

int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}
