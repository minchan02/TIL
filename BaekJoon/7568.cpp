#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(void) {
	int N;
	int k;
	vector<int> x;
	vector<int> y;

	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		int a;
		int b;
		scanf("%d", &a);
		scanf("%d", &b);
		x.push_back(a);
		y.push_back(b);
	}

	for (int j = 0; j < N; ++j) {
		k = 1;
		for (int p = 0; p < N; ++p) {
			if (x[j] < x[p] && y[j] < y[p]) {
				k++;
			}
		}

		printf("%d ", k);
	}
}

// 생각보다 깔끔했던 문제
