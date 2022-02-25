#include <iostream>
#include <cmath>
using namespace std;

void PrintPartitionNumbers(int FirstPartitionNum, int SecondPartitionNum) {
	cout << FirstPartitionNum << " " << SecondPartitionNum << endl;
}

bool isPrime(int num) {
	if (num == 2) { // ManageExcept 소수 할때 2는 꼭 생각해주고 예외처리 해줘!!
		return true;
	}

	for (int i = 2; i < sqrt(num)+1; ++i) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

void FindGoldBachPartition(int num) {
	int FinalNum = num / 2;
	for (int i = FinalNum; i >= 2; --i) {
		if (isPrime(i)) {
			if (isPrime(num - i)) {
				PrintPartitionNumbers(i, num - i);
				break;
			}
		}
	}
}

int main(void) {
	int T;
	int n;

	cin >> T;

	for (int i = 0; i < T; ++i) {
		cin >> n;
		FindGoldBachPartition(n);
	}

	return 0;
}

