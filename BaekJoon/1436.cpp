#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool countSix(int a) {
	int cnt = 0;
	while (a != 0) {
		if (a % 10 == 6) {
			cnt++;
			if (cnt >= 3) {
				return true;
			}
		}
		else {
			cnt = 0;
		}
		a /= 10;
	}

	return false;
}

int main(void) {
	int N;
	int num;
	int numofSix = 0;

	cin >> N;

	num = 665;
	while (numofSix != N) {
		num++;
		if (countSix(num)) {
			numofSix++;
		}
	}

	cout << num;
}

// 문제 이해하느라 꽤 시간씀
