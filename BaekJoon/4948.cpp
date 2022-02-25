#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int PrimeNum;

void SetPrimeNumToZero() {
	PrimeNum = 0;
}

void IncreasePrimeAmount() {
	PrimeNum++;
}

void PrintPrimeAmount() {
	cout << PrimeNum << endl;
}

void ManageExcept() {
	IncreasePrimeAmount();
	PrintPrimeAmount();
}

void findPrimeAmount(int num) {
	for (int i = num+1; i <= 2 * num; ++i) {
		int finalNum = sqrt(i) + 1; // 소수판별법에서 가장 중요한 것 : 제곱근 까지만 확인하면 소수판별 가능!!

		for (int dividingNum = 2; dividingNum <= finalNum; ++dividingNum) {
			if (i % dividingNum == 0) {
				break;
			}

			if (dividingNum == finalNum) {
				IncreasePrimeAmount();
			}
		}
	}

	PrintPrimeAmount();

}

int main(void) {
	int n;

	while (1) {
		SetPrimeNumToZero();

		cin >> n;

		if (n == 0) {
			break;
		}

		if (n == 1) {
			ManageExcept();
			continue;
		}

		findPrimeAmount(n);

		// 함수
	}

	return 0;
}
