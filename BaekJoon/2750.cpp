#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

vector<int> arr;
int N;

void sort() {
	int key;
	int temp;
	for (int i = 1; i < N; ++i) {
		key = arr[i];
		for (int j = i-1; j >= 0; --j) {
			if (key < arr[j]) {
				arr[j+1] = arr[j];
				arr[j] = key;
			}

			else {
				break;
			}
		}
	}
}

int main(void) {

	cin >> N;
	
	for (int i = 0; i < N; ++i) {
		int m;
		cin >> m;
		arr.push_back(m);
	}

	sort();

	for (int i = 0; i < N; ++i) {
		cout << arr[i] << endl;
	}
}


// 선택정렬 뒤로가는거 생각하기 ! 
